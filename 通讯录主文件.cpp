// 这是主文件
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
#include"save.h"//保存功能，形成可用程序
int main()
{
	struct AddressBook abs;
	loadFromFile(&abs);//程序启动时，读取文件中的数据
	while (1)// 构建"死循环"，反复进入菜单界面
	{
		int select = menu();
		switch (select)
		{
		case 1://添加
			addContact(&abs);//地址传递，实现修改实参，才能真的"添加"
			saveToFile(&abs);//每次修改后保存数据,下次能直接调用之前添加的数据
			system("pause");
			system("cls");//清屏操作，让体验更加简洁
			break;
		case 2://显示
			show(&abs);
			system("pause");
			system("cls");
			break;
		case 3:// 删除
			deleteContact(&abs);
			saveToFile(&abs);//每次修改行为后保存数据，包括删除
			system("pause");
			system("cls");
			break;
		case 4:// 查找
			find(&abs);
			system("pause");
			system("cls");
			break;
		case 5:// 修改
			change(&abs);
			saveToFile(&abs);//每次修改行为后保存数据，当然也包括修改
			system("pause");
			system("cls");
			break;
		case 6:// 清空
			clearAll(&abs);
			saveToFile(&abs);//同样也包括清空
			system("pause");
			system("cls");
			break;
		case 0:// 退出
			cout << "欢迎下次使用" << '\n';
			saveToFile(&abs);//退出前保存数据,保险起见
			system("pause");
			return 0;// 当输出0时，程序停止，不再循环
			break;
		default:
			break;
		}
	}
	
	
	
}