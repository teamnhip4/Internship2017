#include "stdio.h"
#include "iostream"
using namespace std;
void createtable()
{
	cout << "\n";
	for (int i = 0; i < 100; i++)
	{
		cout << "\t" << i;
		if ((i + 1) % 10 == 0)
		{
			cout << "\n";			
		}
	}
}
int main()
{
	createtable();
	cout << "\n";
	system("pause");
	return 0;
}