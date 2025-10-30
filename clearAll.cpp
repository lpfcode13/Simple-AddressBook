#include"clearAll.h"
void clearAll(struct AddressBook* abs)
{
	cout << "慎重！信息可能无法恢复，确定要清空联系人列表吗？(y/n)" << '\n';
	char choice;
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		for (int i = 0; i < abs->ContactNum; i++)
		{
			abs->ContactArr[i] = Contact();//使用默认空结构体覆盖所有信息，将每个联系人信息清空
		}
		abs->ContactNum = 0;
		cout << "联系人列表已清空" << '\n';
	}
	else if (choice == 'n' || choice == 'N')
	{
		cout << "已取消清空操作" << '\n';

	}
	else
	{
		cout << "输入有误，已取消清空操作" << '\n';
	}
}