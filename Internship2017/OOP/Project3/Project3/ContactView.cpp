#include "ContactView.h"
#include "ContactInfomation.h"
#include <iostream>
using namespace std;
ContactView::ContactView()
{

}
void ContactView::addView()
{
	char* name = new char[50];
	char* phoneNumber = new char[11];
	char* email = new char[50];
	cin.ignore();
	cout << "Name : "; cin.getline(name, 50); fflush(stdin);
	cout << "\nPhone Number : "; cin >> phoneNumber; fflush(stdin);
	cout << "\nEmail : "; cin.getline(email, 50); fflush(stdin);
	Contact *a = new Contact(name, phoneNumber, email);
	contactCL->addContact(a);
	delete name, phoneNumber, email;
}
void ContactView::updateView()
{
	char* name = new char[50];
	char* phoneNumber = new char[11];
	char* email = new char[50];
	int vt;
	cout << "\nInput position need update: "; cin >> vt;
	cin.ignore();
	cout << "\n\tInput information need update : ";
	cout << "\nInput name  : "; cin.get(name, 50); fflush(stdin);
	cout << "\nInput phone number : "; cin >> phoneNumber; fflush(stdin);
	cout << "\nInput email : "; cin.get(email, 50); fflush(stdin);
	Contact *a = new Contact(name, phoneNumber, email);
	contactCL->updateContact(vt-1,a);
	delete name, phoneNumber, email;
}
void ContactView::deleteView()
{
	int vt;
	cout << "\nInput position need delete  : "; cin >> vt;
	contactCL->deleteContact(vt-1);
}
void ContactView::displayView()
{
	int i = 0;
	cout << "---------------------------------------------------------------------------------------\n";
	cout << "|Index\t|Fullname                   |Phone number		|Email						|\n";
	cout << "---------------------------------------------------------------------------------------\n";
	/*for (Contact *c : contactCL->get())
	{
		cout << "|" << ++i << "\t|" << c->getName( )<< "\t|" << &Contact::getPhoneNumber << "\t|" << &Contact::getEmail << "\t|";
	}
	cout << "\n---------------------------------------------------------------------------------------\n";*/
}
void ContactView::searchView()
{
	char *name = new char[50];
	fflush(stdin);
	cout << "Enter name: ";
	cin.get(name, 50);
	fflush(stdin);
	cout << "---------------------------------------------------------------------------------------\n";
	cout << "|                                        Search                                       |\n";
	cout << "---------------------------------------------------------------------------------------\n";
	cout << "|Index|Fullname                   |Phone number        |Email                         |\n";
	cout << "---------------------------------------------------------------------------------------\n";
	int count = 0;
	for (Contact *c : contactCL->searchContact(name))
	{
		printf("|%5d|%-27s|%-20s|%-30s|\n", ++count, c->getName(), c->getPhoneNumber(), c->getEmail());
	}
	cout << "---------------------------------------------------------------------------------------\n";
}
