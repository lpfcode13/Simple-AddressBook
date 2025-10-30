//查找联系人并输出其信息
#include"find.h"
void find(struct AddressBook* abs)
{
	cout << "请输入要查找的联系人姓名" << '\n';
	string name2;
	cin >> name2;
	int index = check(abs, name2);
	if (index == -1)
	{
		cout << "抱歉，未能找到该联系人" << '\n';
	}
	else
	{
		cout << "为您找到：" << abs->ContactArr[index].name << "，以下是详细信息：" << '\n';
		cout << "姓名：" << abs->ContactArr[index].name << '\n';
		cout << "性别：" << (abs->ContactArr[index].sex == 1 ? "男":"女")<< '\n';
		cout << "年龄：" << abs->ContactArr[index].age << '\n';
		cout << "电话号码：" << abs->ContactArr[index].phoneNum << '\n';
		cout << "住址：" << abs->ContactArr[index].address << '\n';
	}
	
}