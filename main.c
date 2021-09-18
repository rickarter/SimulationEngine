#include "src/se_main.h"

int main()
{
    const se_core_config_t config = {
        .video_mode = {
            .width = 500,
            .height = 500,
        }
    };
    
	//se_core_t* core = se_core_init(&config);
//    
//	while(se_core_is_running(core))
//	{
//		se_event_t event;
//		if(se_core_poll_event(core, &event))
//		{
//
//		}
//	}

    //se_core_shutdown(core);

	SE_ARRAY_DECLARE(int, myarray);
	SE_ARRAY_INIT(myarray);

	//se_array_grow_((void**)&myarray.data, &myarray.used, &myarray._size, sizeof(*myarray.data), 1);
	SE_ARRAY_APPEND(myarray, 16);
	SE_ARRAY_APPEND(myarray, 618);
	printf("%d\n", myarray.data[0]);
	printf("%d\n", myarray.data[1]);
	SE_ARRAY_FREE(myarray);

	return 0;
}
