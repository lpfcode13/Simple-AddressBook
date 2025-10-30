//这是添加联系人功能的源文件
#include"AddressBook.h"
#include"Contact.h"
#include<iostream>
#define MAX 1000
using namespace std;
void addContact(struct AddressBook* abs)
{
	if (abs->ContactNum == MAX)
	{
		cout << "通讯录已满，无法添加！" << '\n';
	}
	else
	{
		string name1;
		cout << "请输入姓名：" << '\n';
		cin >> name1;
		abs->ContactArr[abs->ContactNum].name = name1;
		while(1)//与重复开启菜单原理一致
		{
			cout << "请输入性别：(男1，女2)" << '\n';
			int sex1;
			cin >> sex1;
			if(sex1==1||sex1==2)
			{
				abs->ContactArr[abs->ContactNum].sex = sex1;
				break;
				}
				cout << "输入内容有误，请再次输入" << '\n';
		};
		cout << "请输入年龄：" << '\n';
		int age1;
		cin >> age1;
		abs->ContactArr[abs->ContactNum].age = age1;
		cout << "请输入电话号码：" << '\n';
		string phoneNum1;
		cin >> phoneNum1;
		abs->ContactArr[abs->ContactNum].phoneNum = phoneNum1;
		cout << "请输入地址：" << '\n';
		string address1;
		cin >> address1;
		abs->ContactArr[abs->ContactNum].address = address1;
		abs->ContactNum++;
		cout << "添加成功，联系人信息已记录" << '\n';
	}
}