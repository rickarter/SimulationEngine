/**
* @brief Allocates raw memory
* @params size requested size
*/
void* se_malloc(size_t size);

/**
* @brief Allocates clean (filled with zeroes) memory
* @param count count of objects
* @param size size per object
*/
void* se_calloc(size_t count, size_t size);

/**
* @brief Reallocates memory
* @params ptr pointer
*/
void se_realloc(void* ptr, size_t size);

/**
* @brief Frees memory
* @param ptr pointer
*/
void se_free(void* ptr);

/**
 * @brief Sets all bytes of memory block to zeros
 */
void se_zero(void* data, size_t size);

/**
 * Allocates memory for structure. Memory is filled with zeroes
 */
#define SE_NEW(type) (type*)se_calloc(1, sizeof(type))