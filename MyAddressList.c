#include "MyAddressList.h"
//ͨѶ¼�˵�
void menu()
{
	printf("**********************************\n");
	printf("********      ͨѶ¼     *********\n");
	printf("********   0.�˳�ͨѶ¼  *********\n");
	printf("********   1.�����ϵ��  *********\n");
	printf("********   2.ɾ����ϵ��  *********\n");
	printf("********   3.������ϵ��  *********\n");
	printf("********   4.�޸���ϵ��  *********\n");
	printf("*******  5.��ʾ������ϵ��  *******\n");
	printf("*******  6.���������ϵ��  *******\n");
	printf("*****  7.������Ϊ��ϵ������  *****\n");
	printf("*****   8.������ϵ�˵��ļ�   *****\n");
	printf("*****     9.������ϵ�˵�     *****\n");
	printf("**********************************\n");
}

void IntData(DateofAddress* pclear)//��ʲô���͵ı����ĵ�ַ������ʲô���͵�ָ�����
{
	pclear->sl = 0;
	//void *memset( void *dest, int c, size_t count );
	memset(pclear, 0 , sizeof(pclear->data));
}

void AddAddress(DateofAddress* padd)
{

	printf("������>");
	scanf("%s",padd->data[padd->sl].Nmae);
	printf("�绰��>");
	scanf("%s", padd->data[padd->sl].Call);
	printf("���䣺>");
	scanf("%d", &(padd->data[padd->sl].Age));
	printf("�Ա�>");
	scanf("%s", padd->data[padd->sl].Gender);
	printf("סַ��>");
	scanf("%s", padd->data[padd->sl].Address);
	padd->sl = padd->sl + 1;

	printf("| ----------------- |\n");
	printf("|   �� �� �� �� !   |\n");
	printf("| ----------------- |\n");
}
int FindbyName(const DateofAddress* pfind)
{
	char temp[MAX_Name];
	printf("��������������");
	scanf("%s",temp);
	//int strcmp(const char* string1, const char* string2);
	for (int i = 0; i < pfind->sl; i++)
	{
		if (0 == strcmp(temp, pfind->data[i].Nmae))
		{
			return i; //�ҵ���ϵ�ˣ������±�
		}
	}
	return -1;//δ�ҵ���ϵ�ˣ�����-1
}

void DeleteAddress(DateofAddress* pdele , int i_delete)
{
	for (int i = i_delete; i< pdele->sl -1; i++)
	{
		pdele->data[i] = pdele->data[i + 1];
	}
	pdele->sl--;
	printf("| ----------------- |\n");
	printf("|   ɾ �� �� �� !   |\n");
	printf("| ----------------- |\n");
}

void ShowAll(const DateofAddress* paddress)
{
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n",
		"����","�Ա�", "����",  "�绰", "��ַ");
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
		"����", "�Ա�", "����", "�绰", "��ַ");
	printf("%-20s\t%-5s\t%-5d\t%-12s\t%-20s\n",
		paddress->data[i_find].Nmae,
		paddress->data[i_find].Gender,
		paddress->data[i_find].Age,
		paddress->data[i_find].Call,
		paddress->data[i_find].Address);
}

void ReSingle(DateofAddress* padd, int i_find)
{
	printf("������>");
	scanf("%s", padd->data[i_find].Nmae);
	printf("�绰��>");
	scanf("%s", padd->data[i_find].Call);
	printf("���䣺>");
	scanf("%d", &(padd->data[i_find].Age));
	printf("�Ա�>");
	scanf("%s", padd->data[i_find].Gender);
	printf("סַ��>");
	scanf("%s", padd->data[i_find].Address);
	printf("| ----------------- |\n");
	printf("|   �� �� �� �� !   |\n");
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