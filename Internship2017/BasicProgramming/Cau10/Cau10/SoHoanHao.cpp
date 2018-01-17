#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;
int n;
bool perfectnumber(int n)
{
	int s = 0;
	if (n < 1)
		return false;
	else
	for (int i = 1; i <= n / 2; i++)
	{
		if (n%i == 0)
		{
			s += i;
		}
	}
		return (s == n);
}
void display()
{
	for (int i = 1; i <= n; i++)
	{
		if (perfectnumber(i))
		{
			cout << "" << i << "\n";
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