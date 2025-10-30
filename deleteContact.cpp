#include"deleteContact.h"
// 避免与C++关键字冲突，将delete函数命名为deleteContact
void deleteContact(struct AddressBook* abs)
{
	if (abs->ContactNum == 0)
	{
		cout << "暂无联系人" << '\n';
		return;
	}
	cout << "请输入要删除的联系人姓名：" << '\n';
	string name1;
	cin >> name1;
	int result = check(abs, name1);
	if (result == -1)
	{
		cout << "抱歉，未能找到该联系人" << '\n';
	}
	else
	{
		cout<<"为您找到："<<abs->ContactArr[result].name<<",确定要删除吗？(y/n)"<<'\n';
		char confirm;
		cin >> confirm;
		//删除的本质：用后方的联系人信息覆盖前方的联系人信息，最后将联系人数量 - 1即可
		//优势：不会改变数组的结构，避免了移动数组元素的复杂操作,未来查找时下标变化不大
		//缺点：将大量的数据一个个往前移动，效率较低，当列表人数较多时，影响体验
		if (confirm == 'y' || confirm == 'Y')
		{
			for (int i = result; i < abs->ContactNum - 1; i++)
			{
				abs->ContactArr[i] = abs->ContactArr[i + 1];//把后一个数据赋值给前一个，实现覆盖
			}
			abs->ContactNum--;//删除后，联系人数要减1
			cout << "删除成功" << '\n';
		}
		else if(confirm=='n'||confirm=='N')
		{
			cout << "已取消删除操作" << '\n';
		}
		else
		{
			cout << "输入有误，已取消删除操作" << '\n';
		}
	}
}