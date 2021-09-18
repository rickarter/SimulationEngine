void se_array_init_(void** data, size_t* used, size_t* size)
{
	*data = NULL;
	*used = 0;
	*size = 0;
}


void se_array_grow_(void** data, size_t* used, size_t* size, size_t item_size, size_t n)
{
	used += n;
	if (*used >= *size && *used > 0) {
		// TODO(Eric) : Increase size of the array
		*size *= 2;
		*data = se_realloc(*data, *size * item_size);
	}
}

void se_array_free_(void** data, size_t* used, size_t* size)
{
	se_free(*data);
	*data = NULL;
	*used = 0;
	*size = 0;
}
