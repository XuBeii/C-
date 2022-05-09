#include  "MyStr.h"

char* my_strcpy(char* destination, const char* source)
{
	assert(destination);
	assert(source);
	char* p = destination;
	while (*source)
	{
		*destination++ = *source++;
		//destination++;
		//source++;
	}
	*destination = *source;
	return p;
}


