//���湦�ܵ�ʵ�֣�д���ļ��Ͷ�ȡ�ļ�
#include"save.h"
//д���ļ��ĺ���
void saveToFile(AddressBook* abs, const std::string& filename)
{
	std::ofstream outFile(filename);//ofstream��������ļ�д�����ݣ�����cout
	if (!outFile)//�����ļ����أ���ʧ��
	{
		std::cout << "�����ļ�ʧ�ܣ�" << '\n';
		return;
	}
	outFile << abs->ContactNum << '\n';//��д����ϵ�������������ȡ�ļ�ʱ��ѭ������
	for (int i = 0; i < abs->ContactNum; i++)
	{
		outFile << abs->ContactArr[i].name << ","
			<< abs->ContactArr[i].sex << ","
			<< abs->ContactArr[i].age << ","
			<< abs->ContactArr[i].phoneNum << ","
			<< abs->ContactArr[i].address << ","
			<<'\n';
	}
	//��һ����ÿ����ϵ�˵ĸ�����Ϣ���ö��Ÿ���
	outFile.close();//��ɴ����ر��ļ�
	std::cout << "�ɹ�����ͨѶ¼����"<<filename << '\n';
}
//��ȡ�ļ��ĺ���
void loadFromFile(AddressBook* abs, const std::string& filename)
{
	std::ifstream inFile(filename);//ͬ��ifstream��(ifӦ����in file)�Ӷ����ļ���ȡ���ݣ�����cin
	if (!inFile)
	{
		std::cout << "��Ǹ��δ���ҵ�����������ļ�����Ϊ�������µ�ͨѶ¼" << '\n';
		return;
	}
	abs->ContactNum = 0;//��ȡ�ļ�ǰ���Ƚ�ͨѶ¼��ϵ����������,�൱�����´���ǰ��"�������"
	inFile >> abs->ContactNum;//��ȡ��ϵ������
	inFile.ignore();//���Ի��з�
	for (int i = 0; i < abs->ContactNum; i++)
	{
		std::getline(inFile, abs->ContactArr[i].name);
		//��getline��ȡ�ַ�����Ϣ
		inFile.ignore(1,',');//���Էָ��õĶ���,1��ʾ��1����","�Ǿ���ĺ�������
		inFile >> abs->ContactArr[i].sex;
		inFile.ignore(1,',');
		inFile >> abs->ContactArr[i].age;
		inFile.ignore(1,',');
		std::getline(inFile, abs->ContactArr[i].phoneNum);
		inFile.ignore(1,',');
		std::getline(inFile, abs->ContactArr[i].address);
	}
	inFile.close();//��ɴ����ر��ļ�
	std::cout << "�ɹ��ӣ�" << filename << "��ȡͨѶ¼" << '\n';
}
