#define SE_ARRAY_DECLARE(Type, Name) \
	struct { \
		Type* data; \
		size_t used; \
		size_t _size; \
	} Name \

#define SE_ARRAY_INIT(Name) se_array_init_((void**)&(Name).data, &(Name).used, &(Name)._size)

#define SE_ARRAY_GROW(Name, n) se_array_grow_((void**)&(Name), &(Name).used, &(Name)._size, sizeof(*(Name).data), n)

#define SE_ARRAY_FREE(Name) se_array_free_((void**)&(Name).data, &(Name).used, &(Name)._size)

#define SE_ARRAY_APPEND(Name, item) \
	do { \
		SE_ARRAY_GROW(Name, 1); \
		(Name).data[(Name).used - 1] = (item); \
	} while(0)

#define SE_ARRAY_REMOVE_AT(Name, index) \
	do { \
		if ((int)(index) >= 0 && (index) < (Name).used) { \
			--(Name).used; \
			for(size_t __i = (index); __i < (Name).used; ++__i) { \
				(Name).data[__i] = (Name).data[__i + 1];\
			} \
		} \
	} while(0)

void se_array_init_(void** data, size_t* used, size_t* size);

void se_array_grow_(void** data, size_t* used, size_t* size, size_t item_size, size_t n);

void se_array_free_(void** data, size_t* used, size_t* size);
