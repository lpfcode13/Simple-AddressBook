//保存功能的实现：写入文件和读取文件
#include"save.h"
//写入文件的函数
void saveToFile(AddressBook* abs, const std::string& filename)
{
	std::ofstream outFile(filename);//ofstream，向对象文件写入数据，类似cout
	if (!outFile)//对象文件重载，打开失败
	{
		std::cout << "保存文件失败！" << '\n';
		return;
	}
	outFile << abs->ContactNum << '\n';//先写入联系人数量，方便读取文件时的循环控制
	for (int i = 0; i < abs->ContactNum; i++)
	{
		outFile << abs->ContactArr[i].name << ","
			<< abs->ContactArr[i].sex << ","
			<< abs->ContactArr[i].age << ","
			<< abs->ContactArr[i].phoneNum << ","
			<< abs->ContactArr[i].address << ","
			<<'\n';
	}
	//逐一保存每个联系人的各项信息，用逗号隔开
	outFile.close();//完成传输后关闭文件
	std::cout << "成功保存通讯录至："<<filename << '\n';
}
//读取文件的函数
void loadFromFile(AddressBook* abs, const std::string& filename)
{
	std::ifstream inFile(filename);//同理，ifstream，(if应该是in file)从对象文件读取数据，类似cin
	if (!inFile)
	{
		std::cout << "抱歉，未能找到保存的数据文件，将为您创建新的通讯录" << '\n';
		return;
	}
	abs->ContactNum = 0;//读取文件前，先将通讯录联系人数量归零,相当于重新创造前的"清空数据"
	inFile >> abs->ContactNum;//读取联系人数量
	inFile.ignore();//忽略换行符
	for (int i = 0; i < abs->ContactNum; i++)
	{
		std::getline(inFile, abs->ContactArr[i].name);
		//用getline读取字符串信息
		inFile.ignore(1,',');//忽略分割用的逗号,1表示第1个，","是具体的忽略内容
		inFile >> abs->ContactArr[i].sex;
		inFile.ignore(1,',');
		inFile >> abs->ContactArr[i].age;
		inFile.ignore(1,',');
		std::getline(inFile, abs->ContactArr[i].phoneNum);
		inFile.ignore(1,',');
		std::getline(inFile, abs->ContactArr[i].address);
	}
	inFile.close();//完成传输后关闭文件
	std::cout << "成功从：" << filename << "读取通讯录" << '\n';
}
