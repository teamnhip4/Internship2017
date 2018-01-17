#pragma once
#include "Contact.h"
#include <vector>
#include <iostream>
using namespace std;
class ContactInfomation
{
private:
	ContactInfomation();
	~ContactInfomation();

	static ContactInfomation* instance;

	vector<Contact*> list;

public:

	static ContactInfomation* Instance();

	void addContact(Contact *contact);

	void deleteContact(int m);

	void updateContact(int m, Contact *contact);

	vector<Contact*> searchContact(char* name);

	vector<Contact*> get();
};

