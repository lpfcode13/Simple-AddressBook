//���ǲ˵�����Դ�ļ�
#include<iostream>
#include"menu.h"
using namespace std;
int menu()
{
	cout << "��ӭʹ��ͨѶ¼����ϵͳ" << '\n';
	cout << "1.�����ϵ��" << '\n';
	cout << "2.��ʾ������ϵ��" << '\n';
	cout << "3.ɾ����ϵ��" << '\n';
	cout << "4.������ϵ��" << '\n';
	cout << "5.�޸���ϵ����Ϣ" << '\n';
	cout << "6.�����ϵ���б�" << '\n';
	cout << "0.�˳�ͨѶ¼" << '\n';
	int select;
	cout << "��ѡ��������ܣ�" << '\n';
	cin >> select;
	return select;
}