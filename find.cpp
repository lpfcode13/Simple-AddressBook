//������ϵ�˲��������Ϣ
#include"find.h"
void find(struct AddressBook* abs)
{
	cout << "������Ҫ���ҵ���ϵ������" << '\n';
	string name2;
	cin >> name2;
	int index = check(abs, name2);
	if (index == -1)
	{
		cout << "��Ǹ��δ���ҵ�����ϵ��" << '\n';
	}
	else
	{
		cout << "Ϊ���ҵ���" << abs->ContactArr[index].name << "����������ϸ��Ϣ��" << '\n';
		cout << "������" << abs->ContactArr[index].name << '\n';
		cout << "�Ա�" << (abs->ContactArr[index].sex == 1 ? "��":"Ů")<< '\n';
		cout << "���䣺" << abs->ContactArr[index].age << '\n';
		cout << "�绰���룺" << abs->ContactArr[index].phoneNum << '\n';
		cout << "סַ��" << abs->ContactArr[index].address << '\n';
	}
	
}