#include"deleteContact.h"
// ������C++�ؼ��ֳ�ͻ����delete��������ΪdeleteContact
void deleteContact(struct AddressBook* abs)
{
	if (abs->ContactNum == 0)
	{
		cout << "������ϵ��" << '\n';
		return;
	}
	cout << "������Ҫɾ������ϵ��������" << '\n';
	string name1;
	cin >> name1;
	int result = check(abs, name1);
	if (result == -1)
	{
		cout << "��Ǹ��δ���ҵ�����ϵ��" << '\n';
	}
	else
	{
		cout<<"Ϊ���ҵ���"<<abs->ContactArr[result].name<<",ȷ��Ҫɾ����(y/n)"<<'\n';
		char confirm;
		cin >> confirm;
		//ɾ���ı��ʣ��ú󷽵���ϵ����Ϣ����ǰ������ϵ����Ϣ�������ϵ������ - 1����
		//���ƣ�����ı�����Ľṹ���������ƶ�����Ԫ�صĸ��Ӳ���,δ������ʱ�±�仯����
		//ȱ�㣺������������һ������ǰ�ƶ���Ч�ʽϵͣ����б������϶�ʱ��Ӱ������
		if (confirm == 'y' || confirm == 'Y')
		{
			for (int i = result; i < abs->ContactNum - 1; i++)
			{
				abs->ContactArr[i] = abs->ContactArr[i + 1];//�Ѻ�һ�����ݸ�ֵ��ǰһ����ʵ�ָ���
			}
			abs->ContactNum--;//ɾ������ϵ����Ҫ��1
			cout << "ɾ���ɹ�" << '\n';
		}
		else if(confirm=='n'||confirm=='N')
		{
			cout << "��ȡ��ɾ������" << '\n';
		}
		else
		{
			cout << "����������ȡ��ɾ������" << '\n';
		}
	}
}