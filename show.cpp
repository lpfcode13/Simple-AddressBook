//这是显示功能
#include"show.h"
void show(struct AddressBook* abs)
{
	if (abs->ContactNum == 0)
	{
		cout << "暂无联系人，请添加后再显示" << '\n';
	}
	else
	{
		for (int i = 0; i < abs->ContactNum; i++)
		{
			cout << "联系人：" << abs->ContactArr[i].name << '\t';
			cout << "性别：" << (abs->ContactArr[i].sex==1?"男":"女") << '\t';
			cout << "年龄：" << abs->ContactArr[i].age << '\t';
			cout << "电话号码：" << abs->ContactArr[i].phoneNum << '\t';
			cout << "住址：" << abs->ContactArr[i].address << '\n';
		}
	}
	system("pause");
}