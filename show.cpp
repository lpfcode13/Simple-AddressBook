//������ʾ����
#include"show.h"
void show(struct AddressBook* abs)
{
	if (abs->ContactNum == 0)
	{
		cout << "������ϵ�ˣ�����Ӻ�����ʾ" << '\n';
	}
	else
	{
		for (int i = 0; i < abs->ContactNum; i++)
		{
			cout << "��ϵ�ˣ�" << abs->ContactArr[i].name << '\t';
			cout << "�Ա�" << (abs->ContactArr[i].sex==1?"��":"Ů") << '\t';
			cout << "���䣺" << abs->ContactArr[i].age << '\t';
			cout << "�绰���룺" << abs->ContactArr[i].phoneNum << '\t';
			cout << "סַ��" << abs->ContactArr[i].address << '\n';
		}
	}
	system("pause");
}