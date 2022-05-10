#include <stdio.h>
#include <assert.h>  
#include <string.h>
void* my_memcpy(void* destination, const void* source, size_t num)
{
	assert(destination && source);
	void* ret = destination;
	while (num--)
	{
		*(char*)destination = *(char*)source;
		destination = (char*)destination+1;
		source = (char*)source + 1;
	}
	return ret;
}