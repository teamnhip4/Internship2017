#include "ContactInfomation.h"

ContactInfomation* ContactInfomation::instance = nullptr;

ContactInfomation::ContactInfomation()
{
}
ContactInfomation* ContactInfomation::Instance()
{
	if (ContactInfomation::instance == nullptr)
	{
		ContactInfomation::instance = new ContactInfomation();
	}
	return ContactInfomation::instance;
}

ContactInfomation::~ContactInfomation()
{
}

void ContactInfomation::addContact(Contact *contact)
{
	list.push_back(contact);
}
void ContactInfomation::deleteContact(int n)
{
	list.erase(list.begin() + n);
}
void ContactInfomation::updateContact(int index, Contact *contact)
{
	list.at(index)->setName(contact->getName());
	list.at(index)->setEmail(contact->getEmail());
	list.at(index)->setPhoneNumber(contact->getPhoneNumber());
}
vector<Contact*> ContactInfomation::searchContact(char *name)
{
	vector<Contact*> listResult;
	for (Contact * i : list)
	{
		if (*i->getName() == *name)
		{
			listResult.push_back(i);
		}
	}
	return listResult;
}
vector<Contact*> ContactInfomation::get()
{
	return list;
}