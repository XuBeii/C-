//The first approach
//int my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//The second approach
//int my_strlen(const char* str)
//{
//	int num = 0;
//	while (*str)
//	{
//		num++;
//		str++;
//	}
//	return num;
//
//}
//The third approach
int my_strlen(const char* str)
{
	char* p = str;
	while (*str)
	{
		str++;
	}
	return str-p;
}