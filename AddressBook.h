//���й��ܵ�Ļ��������԰�namespace֮��ĳ������ݰ�������
//ÿ�����ܵ��ʵ�ֶ���Ҫ�������ͷ�ļ�
#pragma once
#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include"Contact.h"
#define MAX 1000
using namespace std;
struct AddressBook
{
	struct Contact ContactArr[MAX];
	int ContactNum=0;
};
#endif