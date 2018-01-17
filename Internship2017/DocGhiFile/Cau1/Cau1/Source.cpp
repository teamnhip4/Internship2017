#include "iostream"
#include "string"
#include "fstream"
#include "stdio.h"
using namespace std;
void writeFile()
{
	ofstream outfile;
	outfile.open("info.txt",ios::out);
	outfile << "|-------------------------------------------------------|" << endl;
	outfile << "|" << "\t" << "Full name" << "\t" << "Dao Tan Cong" << "\t\t\t|" << endl;
	outfile << "|" << "\t" << "Age" << "\t\t" << "20" << "\t\t\t\t|" << endl;
	outfile << "|" << "\t" << "Address" << "\t\t" << "120 Phan Chu Trinh" << "\t\t|" << endl;
	outfile << "|" << "-------------------------------------------------------|" << endl;
	outfile.close();
}
void readFile()
{
	//char s[100];
	string s;
	ifstream infile("info.txt",ios::in);
	if (!infile)
	{
		cout << "\nfile error" << endl;
	}
	else
	{
		while (!infile.eof())
		{
			getline(infile, s);
			cout << s << endl;
		}
	}
	//Error	1	error C4996: 'gets': This function or variable may be unsafe. Consider using gets_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.	f:\demogameloft\baitap\docghifile\cau1\cau1\source.cpp	30	1	Cau1

}
int main()
{
	char s[100];
	writeFile();
	readFile();
	cout << endl;
	system("pause");
	return 0;
}