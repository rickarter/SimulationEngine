#define SE_WINDOW_CLASS_NAME "SimulationEngine"

se_core_t* se_core_init(const se_core_config_t* params)
{
    se_core_t* core = SE_NEW(se_core_t);
    
    core->params = *params;
    core->is_running = true;
    
    se_core_platform_init(core);
    
    se_log("Init\n");
    return core;
}

void se_core_shutdown(se_core_t* core)
{
    se_free(core);
    se_log("Shutdown\n");
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
    
    // NOTE(Eric): This code was for testing, do NOT use it! You can delete it.
    /*HWND window = CreateWindow(TEXT(SE_WINDOW_CLASS_NAME), TEXT("Dummy"), WS_OVERLAPPEDWINDOW, 0, 0, 1, 1, 0, 0, wcx.hInstance, 0);
    
    ShowWindow(window, SW_SHOW);*/
}

void se_core_platform_shutdown(se_core_t* core)
{
    
}

static LRESULT CALLBACK se_win32_window_proc(HWND wnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    return DefWindowProc(wnd, msg, wParam, lParam);
}