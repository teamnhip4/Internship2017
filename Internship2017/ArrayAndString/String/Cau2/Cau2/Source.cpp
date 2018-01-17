#include "stdio.h"
#include "iostream"
#include "string.h"
using namespace std;
void convertString(char s[100])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i]>=65 && s[i] <= 90)
		{
			s[i] = s[i] +32;
		}
	}
	cout << "not used funtion strlwr: " << s << endl;
}
void usedStrlwr(char s[100])
{
	_strlwr(s);
	cout << "used funtion _strlws: " << s;
}
int main()
{
	char s[100];
	cout << "\ninput string : "; cin.get(s,100);
	cout << endl;	
	usedStrlwr(s);
	cout << endl;
	convertString(s);
	cout << endl;
	system("pause");
	return 0;
}