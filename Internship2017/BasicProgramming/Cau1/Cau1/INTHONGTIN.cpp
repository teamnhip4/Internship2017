#include "stdio.h"
#include "iostream"
using namespace std;
void display()
{
	cout << "\n";
	cout << "|-------------------------------------------------------|" << endl;
	cout <<	"|"<< "\t" << "Full name" << "\t" << "Dao Tan Cong"<< "\t\t\t|" << endl;
	cout << "|"<< "\t" << "Age" << "\t\t" << "20" << "\t\t\t\t|" << endl;
	cout << "|"<< "\t" << "Address" << "\t\t" << "120 Phan Chu Trinh" << "\t\t|" << endl;
	cout << "|"<< "-------------------------------------------------------|" << endl;
}
int main()
{
	display();
	cout << "\n";
	system("pause");
	return 0;
}