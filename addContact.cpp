//���������ϵ�˹��ܵ�Դ�ļ�
#include"AddressBook.h"
#include"Contact.h"
#include<iostream>
#define MAX 1000
using namespace std;
void addContact(struct AddressBook* abs)
{
	if (abs->ContactNum == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << '\n';
	}
	else
	{
		string name1;
		cout << "������������" << '\n';
		cin >> name1;
		abs->ContactArr[abs->ContactNum].name = name1;
		while(1)//���ظ������˵�ԭ��һ��
		{
			cout << "�������Ա�(��1��Ů2)" << '\n';
			int sex1;
			cin >> sex1;
			if(sex1==1||sex1==2)
			{
				abs->ContactArr[abs->ContactNum].sex = sex1;
				break;
				}
				cout << "���������������ٴ�����" << '\n';
		};
		cout << "���������䣺" << '\n';
		int age1;
		cin >> age1;
		abs->ContactArr[abs->ContactNum].age = age1;
		cout << "������绰���룺" << '\n';
		string phoneNum1;
		cin >> phoneNum1;
		abs->ContactArr[abs->ContactNum].phoneNum = phoneNum1;
		cout << "�������ַ��" << '\n';
		string address1;
		cin >> address1;
		abs->ContactArr[abs->ContactNum].address = address1;
		abs->ContactNum++;
		cout << "��ӳɹ�����ϵ����Ϣ�Ѽ�¼" << '\n';
	}
}