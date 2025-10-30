//升级的第一步：长期储存！
//将数据保存到文件中，自此形成一个可以"真正意义上的"简单可用文件
#pragma once
#ifndef SAVE_H
#define SAVE_H
#include"AddressBook.h"
#include<fstream>
#include<iostream>
#include<string>
void saveToFile(AddressBook* abs, const std::string& filename="adressbook.txt");
void loadFromFile(AddressBook* abs, const std::string& filename="addressbook.txt");
#endif
/*拓展知识："stream"是数据流，用于调取数据，引申出的3个头文件为:
1.<iostream>输入与输出流，即cin,cout，直接接受键盘的in，将out体现在屏幕上
2.<fstream>文件流，f-->file进行文件和内存之间的数据流通
3.<sstream>字符串，s-->string进行字符串和变量之间的数据流*/