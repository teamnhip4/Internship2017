#pragma once
class Contact
{
private:
	char* name;
	char* phoneNumber;
	char* email;
public:
	Contact();

	Contact(char* name, char* phoneNumber, char* email);

	void setName(char* name);

	char* getName();

	void setPhoneNumber(char* phoneNB);

	char* getPhoneNumber();

	void setEmail(char* email);

	char* getEmail();

	

	~Contact();
};

