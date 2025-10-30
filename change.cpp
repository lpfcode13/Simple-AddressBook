#include"change.h"
void change(struct AddressBook* abs)
{
	cout << "请输入要修改的联系人姓名：" << '\n';
	string name1;
	cin >> name1;
	int result3 = check(abs, name1);
	if (result3 == -1)
	{
		cout << "抱歉，未能找到该联系人" << '\n';
	}
	else
	{
		cout << "为您找到：" << abs->ContactArr[result3].name << "，请输入新的信息：" << '\n';
		string name2;
		cout << "请输入姓名：" << '\n';
		cin >> name2;
		abs->ContactArr[result3].name = name2;
		cout << "请输入性别：(男1，女2)" << '\n';
		int sex1;
		cin >> sex1;
		while (1)
		{
			if (sex1 == 1 || sex1 == 2)
			{
				abs->ContactArr[result3].sex = sex1;
				break;
			}
			cout << "输入内容有误，请再次输入" << '\n';
			cin >> sex1;
		}
		cout << "请输入年龄：" << '\n';
		int age1;
		cin >> age1;
		abs->ContactArr[result3].age = age1;
		cout << "请输入电话号码：" << '\n';
		string phoneNum1;
		cin >> phoneNum1;
		abs->ContactArr[result3].phoneNum = phoneNum1;
		cout << "请输入地址：" << '\n';
		string address1;
		cin >> address1;
		abs->ContactArr[result3].address = address1;
	}
	
}
