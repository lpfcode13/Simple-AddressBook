// �������ļ�
#include<iostream>
#include"menu.h"
#include "AddressBook.h"
#include"Contact.h"
#include"addContact.h"
#include"show.h"
#include"deleteContact.h"
#include"find.h"
#include"change.h"
#include"clearAll.h"
#include"save.h"//���湦�ܣ��γɿ��ó���
int main()
{
	struct AddressBook abs;
	loadFromFile(&abs);//��������ʱ����ȡ�ļ��е�����
	while (1)// ����"��ѭ��"����������˵�����
	{
		int select = menu();
		switch (select)
		{
		case 1://���
			addContact(&abs);//��ַ���ݣ�ʵ���޸�ʵ�Σ��������"���"
			saveToFile(&abs);//ÿ���޸ĺ󱣴�����,�´���ֱ�ӵ���֮ǰ��ӵ�����
			system("pause");
			system("cls");//������������������Ӽ��
			break;
		case 2://��ʾ
			show(&abs);
			system("pause");
			system("cls");
			break;
		case 3:// ɾ��
			deleteContact(&abs);
			saveToFile(&abs);//ÿ���޸���Ϊ�󱣴����ݣ�����ɾ��
			system("pause");
			system("cls");
			break;
		case 4:// ����
			find(&abs);
			system("pause");
			system("cls");
			break;
		case 5:// �޸�
			change(&abs);
			saveToFile(&abs);//ÿ���޸���Ϊ�󱣴����ݣ���ȻҲ�����޸�
			system("pause");
			system("cls");
			break;
		case 6:// ���
			clearAll(&abs);
			saveToFile(&abs);//ͬ��Ҳ�������
			system("pause");
			system("cls");
			break;
		case 0:// �˳�
			cout << "��ӭ�´�ʹ��" << '\n';
			saveToFile(&abs);//�˳�ǰ��������,�������
			system("pause");
			return 0;// �����0ʱ������ֹͣ������ѭ��
			break;
		default:
			break;
		}
	}
	
	
	
}