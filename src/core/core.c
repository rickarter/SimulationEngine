se_core_t* se_core_init()
{
    se_core_t* core = SE_NEW(se_core_t);
    core->is_running = true;
    
    return core;
}

void se_core_shutdown(se_core_t* core)
{
    se_free(core);
}