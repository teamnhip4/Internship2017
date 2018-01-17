#include "stdio.h"
#include "iostream"
#define MAX 100
using namespace std;
void input(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void output(int a[], int n)
{
	cout << "Mang vua nhap  " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}
}
int count(int a[], int n) 
{
	int temp = 1;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				temp = 0;
				break;
			}
			else
			{
				temp = 1;
			}
		}
		if (temp == 1)
		{
			count++;
		}	
	}
	return count;
}
int main()
{
	int n, a[MAX];
	cout << "So luong phan tu cua mang : "; cin >> n;
	input(a, n);
	output(a, n);
	cout << endl;
	cout << "So phan tu khac nhau trong mang :  " << count(a, n);
	cout << "\n";
	system("pause");
	return 0;

}