#include"clearAll.h"
void clearAll(struct AddressBook* abs)
{
	cout << "���أ���Ϣ�����޷��ָ���ȷ��Ҫ�����ϵ���б���(y/n)" << '\n';
	char choice;
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		for (int i = 0; i < abs->ContactNum; i++)
		{
			abs->ContactArr[i] = Contact();//ʹ��Ĭ�Ͽսṹ�帲��������Ϣ����ÿ����ϵ����Ϣ���
		}
		abs->ContactNum = 0;
		cout << "��ϵ���б������" << '\n';
	}
	else if (choice == 'n' || choice == 'N')
	{
		cout << "��ȡ����ղ���" << '\n';

	}
	else
	{
		cout << "����������ȡ����ղ���" << '\n';
	}
}