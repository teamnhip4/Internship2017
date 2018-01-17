#include "stdint.h"
#include "iostream"
#include "list"
using namespace std;

void outputNumber(list<int> n)
{
	list<int>::iterator i = n.begin();
	for (i = n.begin(); i != n.end(); i++)
	{
		cout << *i <<endl;
	}
}
void firstNumber(list<int> n)
{
	cout << n.front();
}
void endtNumber(list<int> n)
{
	cout << n.back();
}
void deleteNumber(list<int> n)
{
	n.pop_back();
	n.pop_front();
}
void selectedPosition(list<int> n,int vt)
{
	list<int>::iterator first_element = n.begin();
	int i;
	for (i = 0, first_element = n.begin(); i < vt && first_element != n.end(); i++, first_element++);
	{
		if (vt == *first_element)
		{
			cout <<" "<< i;
		}
	}
}
void des(list<int> n)
{
	list<int>::reverse_iterator i ;
	for (i = n.rbegin(); i != n.rend(); i++)
	{
		cout << *i << endl;
	}
}
bool lessThan5(const int &m) 
{ 
	if (m < 5)
		return true;
	return false;
}
int main()
{
	int m;
	list<int> listInt;
	int num = 0;
	while (true)
	{
		cout << "input n = ";
		cin >> num;
		if (num == 0)
		{
			break;
		}
		listInt.push_back(num);
	}
	cout << "\nlist just input : " << endl;
	outputNumber(listInt);
	cout << "first number = ";
	firstNumber(listInt);
	cout << endl;
	cout << "end number = ";
	endtNumber(listInt);
	cout << endl;
	cout << "list just delete first & end number : " << endl;
	listInt.pop_back();
	listInt.pop_front();
	outputNumber(listInt);
	cout << endl;
	cout << "input position to get : "; cin >> m;
	if (m > listInt.size())
	{
		cout << "error !" << endl;
	}
	else
	{
		cout << "number need to find : ";
		selectedPosition(listInt, m);
	}
	cout << endl;
	cout << "remove element < 5 : " << endl;
	listInt.remove_if(lessThan5);
	outputNumber(listInt);
	cout << "\nsort ascending : " << endl;
	listInt.sort();
	outputNumber(listInt);
	cout << "\nsort descending : " << endl;
	//listInt.sort();
	list<int>::reverse_iterator i;
	for (i = listInt.rbegin(); i != listInt.rend(); i++)
	{
		cout << *i << endl;
	}
	cout << endl;
	int k;
	cout << "\input a number need to find : ";
	cin >> k;
	selectedPosition(listInt, k);
	cout << endl;
	system("pause");
	return 0;
}