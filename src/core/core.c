#define SE_WINDOW_CLASS_NAME "SimulationEngine"

bool se_core_is_running(se_core_t* core)
{
	return core->is_running;
}

se_core_t* se_core_init(const se_core_config_t* params)
{
    se_core_t* core = SE_NEW(se_core_t);
    
    core->params = *params;
    core->is_running = true;
    
    se_core_platform_init(core);
    
    se_log("Init");
    return core;
}

void se_core_shutdown(se_core_t* core)
{
	core->is_running = false;

	se_core_platform_shutdown(core);
	
    se_free(core);
    se_log("Shutdown");
}


bool se_core_poll_event(se_core_t* core, se_event_t* event)
{
	se_core_platform_poll_events(core);
	if(false)
	{
		return true;
	}

	return false;
}

void se_core_platform_init(se_core_t* core)
{
    const WNDCLASSEX wcx = {
		.cbSize = sizeof(wcx),
		.hCursor = LoadCursor(NULL, IDC_ARROW),
		.hInstance = GetModuleHandle(0),
		.lpfnWndProc = se_win32_window_proc,
		.lpszClassName = TEXT(SE_WINDOW_CLASS_NAME),
		.style = CS_HREDRAW | CS_VREDRAW,
	};
    
    RegisterClassEx(&wcx);

    core->platform.window = CreateWindow(TEXT(SE_WINDOW_CLASS_NAME), TEXT(SE_WINDOW_CLASS_NAME), WS_OVERLAPPEDWINDOW, 0, 0, 500, 500, 0, 0, wcx.hInstance, 0);
    
    ShowWindow(core->platform.window, SW_SHOW);
}

void se_core_platform_shutdown(se_core_t* core)
{
	DestroyWindow(core->platform.window);
	UnregisterClass(TEXT(SE_WINDOW_CLASS_NAME), GetModuleHandle(NULL));

}

void se_core_platform_poll_events(se_core_t* core)
{
	MSG message;
	while(PeekMessage(&message, NULL, 0, 0, PM_REMOVE))
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
	}
}

static LRESULT CALLBACK se_win32_window_proc(HWND wnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    return DefWindowProc(wnd, msg, wParam, lParam);
}
