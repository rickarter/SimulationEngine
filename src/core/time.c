double se_time_get_seconds(void)
{
    LARGE_INTEGER frequency, time;
    QueryPerformanceFrequency(&frequency);
	QueryPerformanceCounter(&time);
    
    return (double)time.QuadPart / (double)frequency.QuadPart;
}