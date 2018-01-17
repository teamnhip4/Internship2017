#include "stdio.h"
#include "iostream"
#include "string.h"
using namespace std;
void deleteString(char s[], int vt)
{
	int n = strlen(s);
	for (int i = vt + 1; i < n; i++)
	{
		s[i - 1] = s[i];
	}
	s[strlen(s) - 1] = '\0';
}
int main()
{
	int vt;
	char s[100];
	cout << "input string : ";
	cin.get(s, 100);
	cout << "input delete position : "; cin >> vt;
	deleteString(s, vt);
	cout << "string just delete position : ";
	cout << s;
	cout << endl;
	system("pause");
	return 0;
}