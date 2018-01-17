#include "stdio.h"
#include "iostream"
#include "math.h"
using namespace std;
int n;
bool element(int n)
{
	int cout = 0;
	for (int i = 1; i <=n ; i++)
	{
		if (n%i == 0)
		{
			cout++;
		}
	}
	if (cout == 2)
		return true;
	else
	{
		return false;
	}
}
void display()
{
	{
		for (int i = 1; i < n; i++)
		{
			if (element(i))
			{
				cout << "" << i << "\n";
			}
		}
	}
}
int main()
{
	cout << "\nNhap n = "; cin >> n;
	display();
	cout << "\n";
	system("pause");
	return 0;
}