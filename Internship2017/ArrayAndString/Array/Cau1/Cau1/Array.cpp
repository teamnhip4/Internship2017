#include<iostream>
#include<math.h>
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
		cout <<"a["<<i<<"] = "<< a[i] << endl;
	}		
}
int min(int a[], int n)
{
	int min;
	min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[0])
		{
			min = a[i];
		}
	}
	return min;
}
double average(int a[], int n)
{
	double avr = 0;
	for (int i = 0; i < n; i++)
	{
		avr = (double) (avr + a[i]) / n*1.0;
	}
	return avr;
}
bool exam(int a[], int i)
{
	double b = sqrt(a[i]);
	if ((b*b) == a[i])
	{
		return true;
	}
	else
		return false;
}
int numberpoles(int a[], int n)
{
	cout << endl;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			continue;
		}
		else
		{
			if (exam(a, i))
			{
				cout << "a[" << i << "] = " << a[i] << endl;
			}
		}
	}
	return 0;
}

void sort(int a[], int n)
{
	int i, j;
	for ( i = 0; i < n; i++)
	{
		for ( j = i + 1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
}
int find_x(int a[], int n, int x)
{
	int count = 0;
	int k = 0;
	int i,c;
	for ( i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			count++;
			break;
		}
	}
	if (count != 0)
	{
		k = a[i];
		for (i = 0; i < n; i++)
		{
			if ((a[i] == x) && (a[i] == k))
			{
				k = a[i];
				c = i;
			}
		}
		cout << x << " o vi tri thu : a[" << c<<"]" << endl;
	}
	else
	{
		cout << x << " khong tim thay " << endl;
	}
	return 0;
}
void search(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		
		if (a[i] < 0)
		{
			sort(a, n);
		}
	}
	cout << a[0];
}
void main()
{
	int n,x, a[MAX];
	cout << "So luong phan tu cua mang : "; cin >> n;
	input(a, n);
	output(a, n);
	cout << endl;
	cout << "min = " << min(a, n) << endl;
	cout << endl;
	cout << "average = " << average(a, n) << endl;
	cout << "number of poles : " << numberpoles(a, n);
	cout << endl;
	cout << "sort up ascending ";
	sort(a, n);
	output(a, n);
	cout << endl;
	cout << "nhap x = "; cin >> x;
	cout << endl;
	find_x(a, n, x);
	cout << endl;
	cout << "phan tu am lon nhat : ";
	search(a, n);
	cout << endl;
	system("pause");
}