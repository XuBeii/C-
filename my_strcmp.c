#include  "MyStr.h"
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	while (*str1 || *str2)
	{
		if (*str1 > *str2)
		{
			return 1;
			break;
		}
		else if (*str1 < *str2)
		{
			return -1;
			break;
		}
		else
		{
			str1++;
			str2++;
		}
	}
	return 0;
}
