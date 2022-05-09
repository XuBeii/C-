#include  "MyStr.h"


char* my_strcat(char* destination, const char* source)
{
	assert(destination);
	assert(source);
	char* p = destination;
	while (*destination)//1寻找目标字符串的'\0'
	{
		destination++;
	}
	while (*destination++ = *source++)//2追加源字符串的'\0'
	//while ('\x0' != *source)
	//{
	//	*destination = *source;
	//	destination++;
	//	source++;
	//}
	{
		
	}
	return p;


}