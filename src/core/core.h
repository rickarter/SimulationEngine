struct se_video_mode {
    uint32_t width;
    uint32_t height;
};

struct se_core_config {
    se_video_mode_t video_mode;
};

struct se_core {
    se_core_config_t params;
    bool is_running;
    
    struct {
        HWND window;
    } platform;
};

/**
 * @brief returns true if engine is running
*/
bool se_core_is_running(se_core_t* core);
/**
* @brief Initializes subsystems
*/
se_core_t* se_core_init(const se_core_config_t* params);

/**
* @brief Shutdowns subsystems
*/
void se_core_shutdown(se_core_t* core);

/**
* Platform-specific functions
*/

/**
* @brief Internal. Initializes platform-specific part of the core
*/
void se_core_platform_init(se_core_t* core);

/**
* @brief Internal. Shutdowns platform-specific part of the core
*/
void se_core_platform_shutdown(se_core_t* core);

/**
 * @brief Pushes a new event into the event queue
*/
void se_core_push_event(se_core_t* core, se_event_t* event);

/** 
 * @brief Polls event from the event queue. Returns true if event was extracted
*/
bool se_core_poll_event(se_core_t* core, se_event_t* event);

/**
* @brief Internal. Polls platform events
*/
void se_core_platform_poll_events(se_core_t* core);

static LRESULT CALLBACK se_win32_window_proc(HWND wnd, UINT msg, WPARAM wParam, LPARAM lParam);
