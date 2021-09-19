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
	
	SE_ARRAY_FREE(core->events_queue);
    se_free(core);
    se_log("Shutdown");
}

void se_core_push_event(se_core_t* core, se_event_t* event)
{
	SE_ARRAY_APPEND(core->events_queue, *event);
}

bool se_core_poll_event(se_core_t* core, se_event_t* event)
{
	se_core_platform_poll_events(core);
	if(core->events_queue.used)
	{
		*event = core->events_queue.data[0];
		SE_ARRAY_REMOVE_AT(core->events_queue, 0);
		return true;
	}

	return false;
}
