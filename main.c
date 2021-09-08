#include "src/se_main.h"

typedef struct some{
    int a;
    int b;
} some_t;

int main()
{
    some_t* ptr = SE_NEW(some_t);
    
    ptr->a = 15;
    ptr->b = 16;
    
    printf("a = %d, b = %d\n", ptr->a, ptr->b);
    
    return 0;
}