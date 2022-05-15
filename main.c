#include "MyAddressList.h"

int main()
{
	DateofAddress con; //通讯录数据
	IntData(&con);	//初始化con
	int choose = -1;
	do
	{
		menu();//展示菜单
		printf("请选择：>\n");
		scanf("%d", &choose);

		switch (choose)
		{
		case ADD:
			AddAddress(&con);
			break;
		case DELETE:
		{
			int find = FindbyName(&con);
			if (find >= 0)
			{
				DeleteAddress(&con, find);
			}
			else
			{
				printf("| ----------------- |\n");
				printf("| 未找到指定联系人! |\n");
				printf("| ----------------- |\n");
			}
			break;
		}
		case FIND:
		{
			int find = FindbyName(&con);
			if (find >= 0)
			{
				ShowSingle(&con, find);
			}
			else
			{
				printf("| ----------------- |\n");
				printf("| 未找到指定联系人! |\n");
				printf("| ----------------- |\n");
			}
			break;
		}
		case SHOW:
			ShowAll(&con);
			break;
		case RECOMP:
		{
			int find = FindbyName(&con);
			if (find >= 0)
			{
				ReSingle(&con, find);
			}
			else
			{
				printf("| ----------------- |\n");
				printf("| 未找到指定联系人! |\n");
				printf("| ----------------- |\n");
			}
			break;
		}
		case CLEAR:
		{
			IntData(&con);
			break;
		}
		case COMPBYNAME:
		{
			Compbyname(&con);
			printf("| ----------------- |\n");
			printf("|    排 序 完 成!   |\n");
			printf("| ----------------- |\n");
			break;
		}
		default:
			printf("错误选择，请重新选择>");
			break;
		}
		
	} while ( 0 != choose);
	return 0;
}