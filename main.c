#include "MyAddressList.h"

int main()
{
	DateofAddress con; //ͨѶ¼����
	IntData(&con);	//��ʼ��con
	int choose = -1;
	do
	{
		menu();//չʾ�˵�
		printf("��ѡ��>\n");
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
				printf("| δ�ҵ�ָ����ϵ��! |\n");
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
				printf("| δ�ҵ�ָ����ϵ��! |\n");
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
				printf("| δ�ҵ�ָ����ϵ��! |\n");
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
			printf("|    �� �� �� ��!   |\n");
			printf("| ----------------- |\n");
			break;
		}
		default:
			printf("����ѡ��������ѡ��>");
			break;
		}
		
	} while ( 0 != choose);
	return 0;
}