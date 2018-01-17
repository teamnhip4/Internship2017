#include "Contact.h"


Contact::Contact()
{
}
Contact::Contact(char* name, char * phoneNumber, char* email)
{
	this->name = name;
	this->phoneNumber = phoneNumber;
	this->email = email;
}
void Contact::setName(char* name)
{
	this->name = name;
}
char* Contact::getName()
{
	return this->name;
}
void Contact::setPhoneNumber(char* std)
{
	this->phoneNumber = std;
}
char* Contact::getPhoneNumber()
{
	return this->phoneNumber;
}
void Contact::setEmail(char* email)
{
	this->email = email;
}
char* Contact::getEmail()
{
	return this->email;
}
Contact::~Contact()
{
}
