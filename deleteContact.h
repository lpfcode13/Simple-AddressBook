#pragma once
#ifndef DELETECONTACT_H
#define DELETECONTACT_H
#include"AddressBook.h"
#include"check.h"//包含检索判定，才能进一步实现删除
#include<iostream>
#include<string>
void deleteContact(struct AddressBook* abs);
#endif