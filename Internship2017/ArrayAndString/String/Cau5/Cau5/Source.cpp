#include "stdio.h"
#include "iostream"
#include "string.h"
using namespace std;
char *p;
/*void reverseWordString(char s[], char *p)
{
	int i = 0;
	p = strtok(s, " ");
	while (p != '\0')
	{
		strcpy(s1[i], p);
		i++;
		p = strtok(NULL, " ");
	}
	while (i >= 0)
	{
		cout <<s1[i]<<" ";
		i--;
	}
	/*for (i = i - 1; i >= 0; i--)
	{
		cout << " " << s1[i];
	}*/
//}
void reverse(char *p)
{
	if (p != NULL)
	{
		reverse(strtok(NULL, " "));
		cout <<p<<" ";
	}
}
int main()
{
	char s[100];
	cout << "\ninput string : ";
	cin.get(s, 100);
	cout << "\nstring just input : "; cout << s;
	cout << endl;
	cout << "string just reverse:";
	//reverseWordString(s, p);
	p = strtok(s, " ");
	reverse(p);
	cout << endl;
	system("pause");
	return 0;
}