#include "src/se_main.h"

int main()
{
    double start_time = se_time_get_seconds();
    // NOTE(Eric): Core test
    se_core_t* core = se_core_init();
    se_core_shutdown(core);
    
    // NOTE(Eric): Calculating time test
    
    int a = 12;
    for (int i = 0; i < 1000000000 ; i += 1){
        // NOTE(Eric): Wasting resources
        a += 1 * a / 42 * i;
    }
    
    printf("%d\n", a);
    
    double end_time = se_time_get_seconds();
    
    printf("Start time: %lf\n",start_time);
    printf("End time: %lf\n",end_time);
    printf("Delta time: %lf\n", end_time - start_time);
}