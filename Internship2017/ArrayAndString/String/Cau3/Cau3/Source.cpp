#include "stdio.h"
#include "iostream"
#include "string.h"
using namespace std;
void reverseString(char s[100])
{
	for (int i = strlen(s); i >= 0; i--)
	{
		cout << s[i];
	}
}
int main()
{
	char s[100];
	cout << "\ninput string : "; cin.get(s, 100);
	cout << "\nString just input : " << s;
	cout << endl;
	cout << "\nreverse the String : ";
	reverseString(s);
	cout << endl;
	system("pause");
	return 0;
}