#include "src/se_main.h"

int main()
{
    se_core_t* core = se_core_init();
    
    se_core_shutdown(core);
}