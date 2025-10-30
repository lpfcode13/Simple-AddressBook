//所有功能点的基础，可以把namespace之类的常用内容包括在内
//每个功能点的实现都需要包含这个头文件
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