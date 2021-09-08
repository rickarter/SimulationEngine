static int se_alloc_count;

void* se_malloc(size_t size)
{
    void* mem;
    
    mem = malloc(size);
    
    ++se_alloc_count;
    
    return mem;
}

void* se_calloc(size_t count, size_t size)
{
    void* mem;
    
    mem = calloc(count, size);
    
    ++se_alloc_count;
    
    return mem;
}

void se_realloc(void* ptr, size_t size)
{
    
}

void se_free(void* ptr)
{
    if(ptr){
        --se_alloc_count;
    }
    free(ptr);
}

void se_zero(void* data, size_t size)
{
    memset(data, 0, size);
}