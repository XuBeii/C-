#include  "MyStr.h"


char* my_strcat(char* destination, const char* source)
{
	assert(destination);
	assert(source);
	char* p = destination;
	while (*destination)//1Ѱ��Ŀ���ַ�����'\0'
	{
		destination++;
	}
	while (*destination++ = *source++)//2׷��Դ�ַ�����'\0'
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