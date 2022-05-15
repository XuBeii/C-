#pragma once
#include <stdio.h>
#include < string.h >

#define MAX_Name  12
#define MAX_Gender  4
#define MAX_Call  12
#define MAX_Address  24

#define MAX  1000
//通讯录菜单
void menu();
//声明个人数据类型
typedef struct DateofPerson//定义结构体类型DateofPerson
{
	char Nmae[MAX_Name];
	char Gender[MAX_Gender];
	int  Age;
	char Call[MAX_Call];
	char Address[MAX_Address];
}DateofPerson;
//声明通讯录数据类型
typedef struct DateofAddress
{
	DateofPerson data[MAX];//定义DateofPerson类型的变量，并存入数组data中
	int sl ;
}DateofAddress;

enum Choice//枚举 //ADD为常量1 
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
//初始化con
void IntData(DateofAddress* pclear);
//增加联系人
void AddAddress(DateofAddress* padd);
//删除联系人
void DeleteAddress(DateofAddress* padd , int);
//查找联系人
int FindbyName(const DateofAddress* pfind);
//展示通讯录
void ShowAll(const DateofAddress*);
void ShowSingle(const DateofAddress* paddress, const int i_find);
//修改联系人
void ReSingle(DateofAddress* padd, int);
//按照名字排序
void Compbyname(DateofAddress* padd);