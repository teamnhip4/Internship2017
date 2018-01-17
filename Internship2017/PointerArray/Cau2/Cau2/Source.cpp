#include "stdio.h"
#include "iostream"
#include "malloc.h"
using namespace std;
#define MAX 50
void inputArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = " ; 
		cin >> a[i];
	}
}
void outputArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cout << a[i] << endl;
	}
}
int max(int *a, int n)
{
	int max = *(a + 0);
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > max)
		{
			max = *(a + i);
		}
	}
	return max;
}
void swapPointer(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*(a + i)<*(a + j))
			{
				swapPointer((a + i), (a + j));
			}
		}
	}
}
void reverseArray(int *a, int n)
{
	for (int i = n-1; i>=0; i--)
	{
		cout << "a[" << i << "] = ";
		cout << a[i] << endl;
	}
}
int main()
{
	int *a; 
	int n;
	a = new int[MAX];
	cout << "\ninput amount of array : "; cin >> n; cout << endl;
	inputArray(a, n);
	cout << "\noutput array :" << endl;
	outputArray(a, n);
	cout << endl;
	cout << "max : " << max(a, n);
	cout << endl;
	cout << "sort ascending : " << endl;
	sort(a, n);
	outputArray(a, n);
	cout << endl;
	cout << "reverse array : " <<endl;
	reverseArray(a, n);
	delete[]a;
	cout << endl;
	system("pause");
	return 0;
}