//这是"联系人"的头文件
#pragma once
#ifndef CONTACT_H
#define CONTACT_H
#include<string>
struct Contact
{
	std::string name;
	int sex;
	int age;
	std::string phoneNum;
	std::string address;
};
#endif