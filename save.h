//�����ĵ�һ�������ڴ��棡
//�����ݱ��浽�ļ��У��Դ��γ�һ������"���������ϵ�"�򵥿����ļ�
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
/*��չ֪ʶ��"stream"�������������ڵ�ȡ���ݣ��������3��ͷ�ļ�Ϊ:
1.<iostream>���������������cin,cout��ֱ�ӽ��ܼ��̵�in����out��������Ļ��
2.<fstream>�ļ�����f-->file�����ļ����ڴ�֮���������ͨ
3.<sstream>�ַ�����s-->string�����ַ����ͱ���֮���������*/