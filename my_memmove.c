#include <stdio.h>
#include <assert.h>  
#include <string.h>
void* my_memmove(void* destination, const void* source, size_t num)
{
	assert(destination && source);
	void* ret = destination;
	if(destination < wcsrchr)
	{ 
		//Ç°--ºó
		while (num--)
		{
			*(char*)destination = *(char*)source;
			destination = (char*)destination + 1;
			source = (char*)source + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)destination+num) = *((char*)source+num);

		}
	}

	return ret;
}