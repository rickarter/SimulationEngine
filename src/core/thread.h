typedef struct se_thread {
    intptr_t handle;
} se_thread_t;

typedef int(*se_thread_start_t)(void*);
/**
* @Creates a new thread
*/
int se_thread_create(se_thread_t* thread, se_thread_start_t func, void* arg);

int se_thread_detach(se_thread_t* thread);