#pragma once
#include <stdio.h>
#include < string.h >

#define MAX_Name  12
#define MAX_Gender  4
#define MAX_Call  12
#define MAX_Address  24

#define MAX  1000
//ͨѶ¼�˵�
void menu();
//����������������
typedef struct DateofPerson//����ṹ������DateofPerson
{
	char Nmae[MAX_Name];
	char Gender[MAX_Gender];
	int  Age;
	char Call[MAX_Call];
	char Address[MAX_Address];
}DateofPerson;
//����ͨѶ¼��������
typedef struct DateofAddress
{
	DateofPerson data[MAX];//����DateofPerson���͵ı���������������data��
	int sl ;
}DateofAddress;

enum Choice//ö�� //ADDΪ����1 
{
	EXIT,
	ADD,
	DELETE,
	FIND,
	RECOMP,
	SHOW,
	CLEAR,
	COMPBYNAME,
	SAVE,
	LOAD
};
//��ʼ��con
void IntData(DateofAddress* pclear);
//������ϵ��
void AddAddress(DateofAddress* padd);
//ɾ����ϵ��
void DeleteAddress(DateofAddress* padd , int);
//������ϵ��
int FindbyName(const DateofAddress* pfind);
//չʾͨѶ¼
void ShowAll(const DateofAddress*);
void ShowSingle(const DateofAddress* paddress, const int i_find);
//�޸���ϵ��
void ReSingle(DateofAddress* padd, int);
//������������
void Compbyname(DateofAddress* padd);