//检索判定功能，是"删除"，"查找"和"修改"的前置功能
//该功能要实现检索到特定联系人是否存在，并返回ta的在数组中的位置，若没有这个联系人，也应该返回一个标志值，表示没有找到
#include"check.h"
int check(AddressBook* abs, string Cname)
{
	for (int i = 0; i < abs->ContactNum; i++)//检索判定本质上是将数组遍历了一遍
	{
		if (abs->ContactArr[i].name == Cname)
		{
			return i;//找到了该联系人，返回ta在数组中的下标值
		}
		//不用else，因为遍历后自动进行下一步,当然下一步必须放在循环节外面
	}
	return -1;//返回-1作为标志值，说明"未能找到"

}