#include "MyAddressList.h"
//通讯录菜单
void menu()
{
	printf("**********************************\n");
	printf("********      通讯录     *********\n");
	printf("********   0.退出通讯录  *********\n");
	printf("********   1.添加联系人  *********\n");
	printf("********   2.删除联系人  *********\n");
	printf("********   3.查找联系人  *********\n");
	printf("********   4.修改联系人  *********\n");
	printf("*******  5.显示所有联系人  *******\n");
	printf("*******  6.清空所有联系人  *******\n");
	printf("*****  7.以姓名为联系人排序  *****\n");
	printf("*****   8.保存联系人到文件   *****\n");
	printf("*****     9.加载联系人到     *****\n");
	printf("**********************************\n");
}

void IntData(DateofAddress* pclear)//传什么类型的变量的地址，就用什么类型的指针接收
{
	pclear->sl = 0;
	//void *memset( void *dest, int c, size_t count );
	memset(pclear, 0 , sizeof(pclear->data));
}

void AddAddress(DateofAddress* padd)
{

	printf("姓名：>");
	scanf("%s",padd->data[padd->sl].Nmae);
	printf("电话：>");
	scanf("%s", padd->data[padd->sl].Call);
	printf("年龄：>");
	scanf("%d", &(padd->data[padd->sl].Age));
	printf("性别：>");
	scanf("%s", padd->data[padd->sl].Gender);
	printf("住址：>");
	scanf("%s", padd->data[padd->sl].Address);
	padd->sl = padd->sl + 1;

	printf("| ----------------- |\n");
	printf("|   添 加 成 功 !   |\n");
	printf("| ----------------- |\n");
}
int FindbyName(const DateofAddress* pfind)
{
	char temp[MAX_Name];
	printf("请输入姓名查找");
	scanf("%s",temp);
	//int strcmp(const char* string1, const char* string2);
	for (int i = 0; i < pfind->sl; i++)
	{
		if (0 == strcmp(temp, pfind->data[i].Nmae))
		{
			return i; //找到联系人，返回下标
		}
	}
	return -1;//未找到联系人，返回-1
}

void DeleteAddress(DateofAddress* pdele , int i_delete)
{
	for (int i = i_delete; i< pdele->sl -1; i++)
	{
		pdele->data[i] = pdele->data[i + 1];
	}
	pdele->sl--;
	printf("| ----------------- |\n");
	printf("|   删 除 成 功 !   |\n");
	printf("| ----------------- |\n");
}

void ShowAll(const DateofAddress* paddress)
{
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n",
		"名字","性别", "年龄",  "电话", "地址");
	for (int i = 0; i < paddress->sl; i++)
	{
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-20s\n",
			paddress->data[i].Nmae,
			paddress->data[i].Gender,
			paddress->data[i].Age, 
			paddress->data[i].Call,
			paddress->data[i].Address);
	}
}

void ShowSingle(const DateofAddress* paddress,const  int i_find)
{
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n",
		"名字", "性别", "年龄", "电话", "地址");
	printf("%-20s\t%-5s\t%-5d\t%-12s\t%-20s\n",
		paddress->data[i_find].Nmae,
		paddress->data[i_find].Gender,
		paddress->data[i_find].Age,
		paddress->data[i_find].Call,
		paddress->data[i_find].Address);
}

void ReSingle(DateofAddress* padd, int i_find)
{
	printf("姓名：>");
	scanf("%s", padd->data[i_find].Nmae);
	printf("电话：>");
	scanf("%s", padd->data[i_find].Call);
	printf("年龄：>");
	scanf("%d", &(padd->data[i_find].Age));
	printf("性别：>");
	scanf("%s", padd->data[i_find].Gender);
	printf("住址：>");
	scanf("%s", padd->data[i_find].Address);
	printf("| ----------------- |\n");
	printf("|   修 改 成 功 !   |\n");
	printf("| ----------------- |\n");
}

void Compbyname(DateofAddress* padd)
{
	DateofPerson temp = {0};
	for (int i = 0; i < padd->sl - 1; i++)
	{
		for (int j = 0; j < padd->sl - i -1; j++)
		{
			if (strcmp(padd->data[j].Nmae, padd->data[j + 1].Nmae) > 0 )
			{
				memcpy(&temp, &padd->data[j], sizeof(padd->data[j]));
				memcpy(&padd->data[j], &padd->data[j + 1], sizeof(padd->data[j + 1]));
				memcpy(&padd->data[j + 1], &temp, sizeof(temp));
			}

		}
	}
}