#include"change.h"
void change(struct AddressBook* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��������" << '\n';
	string name1;
	cin >> name1;
	int result3 = check(abs, name1);
	if (result3 == -1)
	{
		cout << "��Ǹ��δ���ҵ�����ϵ��" << '\n';
	}
	else
	{
		cout << "Ϊ���ҵ���" << abs->ContactArr[result3].name << "���������µ���Ϣ��" << '\n';
		string name2;
		cout << "������������" << '\n';
		cin >> name2;
		abs->ContactArr[result3].name = name2;
		cout << "�������Ա�(��1��Ů2)" << '\n';
		int sex1;
		cin >> sex1;
		while (1)
		{
			if (sex1 == 1 || sex1 == 2)
			{
				abs->ContactArr[result3].sex = sex1;
				break;
			}
			cout << "���������������ٴ�����" << '\n';
			cin >> sex1;
		}
		cout << "���������䣺" << '\n';
		int age1;
		cin >> age1;
		abs->ContactArr[result3].age = age1;
		cout << "������绰���룺" << '\n';
		string phoneNum1;
		cin >> phoneNum1;
		abs->ContactArr[result3].phoneNum = phoneNum1;
		cout << "�������ַ��" << '\n';
		string address1;
		cin >> address1;
		abs->ContactArr[result3].address = address1;
	}
	
}
