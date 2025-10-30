//显示功能头文件
#pragma once
#ifndef SHOW_H
#define SHOW_H
#include"AddressBook.h"//所有操作都是对于"通讯录"进行的，必须包含这个头文件
#include<iostream>
#include<string>
void show(struct AddressBook* abs);
#endif
