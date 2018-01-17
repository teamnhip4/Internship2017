#include "stdio.h"
#include "iostream"
using namespace std;
void swapPointer(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swapReference(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	cout << "\ninput number a and number b : " << endl;
	cin >> a >> b;
	cout << "\nswap pointer : "; swapPointer(&a, &b);
	cout << a << " "<<b;
	cout << "\nswap reference : "; swapReference(a, b);
	cout << a <<" "<< b << endl;
	system("pause");
	return 0;
}