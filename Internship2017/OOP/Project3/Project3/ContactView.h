#pragma once
#include "ContactInfomation.h"
#include "Contact.h"
#include "iostream"

using namespace std;
class ContactView
{
private:
	ContactInfomation *contactCL = ContactInfomation::Instance();
public:
	ContactView();
	void addView();
	void updateView();
	void deleteView();
	void displayView();
	void searchView();
};

