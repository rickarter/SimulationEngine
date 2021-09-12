#include "src/se_main.h"

int main()
{
    const se_core_config_t config = {
        .video_mode = {
            .width = 500,
            .height = 500,
        }
    };
    
    se_core_t* core = se_core_init(&config);
    
    se_core_shutdown(core);
}