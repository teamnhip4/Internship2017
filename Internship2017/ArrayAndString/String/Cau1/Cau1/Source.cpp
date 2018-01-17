#include "stdio.h"
#include "iostream"

using namespace std;

void removedSpace(char s[], int vt)
{
	int n = strlen(s);
	for (int i = vt + 1; i < n; i++)
	{
		s[i - 1] = s[i];
	}
	s[n - 1] = '\0';
}
void removeSpaceAtFirst(char s[])
{
	while (true)
	{
		if (s[0] == ' ')
		{
			removedSpace(s, 0);
		}
		else
		{
			break;
		}
	}
}
void removeSpaceAtBetween2Character(char s[])
{
	for (int i = 0; i < strlen(s) - 1; i++)
	{
		if (s[i] == ' ')
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}
	}
}

void removeSpaceAtTheEnd(char s[])
{
	while (true)
	{
		if (s[strlen(s)-1] == ' ')
		{
			removedSpace(s, strlen(s)-1);
		}
		else
		{
			break;
		}
	}
}
int main()
{
	char s[100];
	cout << "\ninput string : "; cin.get(s, 100);
	cout << endl;
	cout << "string just input : ";  cout << s << endl;
	cout << "string just remove : ";
	removeSpaceAtFirst(s);
	removeSpaceAtTheEnd(s);
	removeSpaceAtBetween2Character(s);
	cout << s;
	cout << endl;
	system("pause");
	return 0;
}