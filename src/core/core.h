struct se_core{
    bool is_running;
};

/**
* @brief Initializes subsystems
*/
se_core_t* se_core_init();

/**
* @brief Shutdowns subsystems
*/
void se_core_shutdown(se_core_t* core);