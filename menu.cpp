//这是菜单功能源文件
#include<iostream>
#include"menu.h"
using namespace std;
int menu()
{
	cout << "欢迎使用通讯录管理系统" << '\n';
	cout << "1.添加联系人" << '\n';
	cout << "2.显示所有联系人" << '\n';
	cout << "3.删除联系人" << '\n';
	cout << "4.查找联系人" << '\n';
	cout << "5.修改联系人信息" << '\n';
	cout << "6.清空联系人列表" << '\n';
	cout << "0.退出通讯录" << '\n';
	int select;
	cout << "请选择操作功能：" << '\n';
	cin >> select;
	return select;
}