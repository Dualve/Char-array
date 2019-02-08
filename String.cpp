#include <iostream>
#include <ctype.h>
#include <string.h>
#include <iomanip>
//#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	char string[50] = "This is strings:";
	cout << "Enter your string: " << endl;
	char in_string[500];
	gets_s(in_string);
	//cin.getline(in_string, 500);
	cout << "Length = " << strlen(in_string) << endl;
	cout << "Enter your string one more time: " << endl;
	char in_string1[500];
	//cin.getline(in_string1, 500);
	gets_s(in_string1);
	cout << "Length = " << strlen(in_string1) << endl;
	cout << "s1 < s2" << setw(2) << strcmp(in_string, in_string1) << endl;
	cout << "s2 > s1" << setw(2) << strcmp(in_string1, in_string) << endl;
	cout << string << "\n" << in_string << "\n" << in_string1 << endl;
	strcat_s(in_string, in_string1);
	cout << "If we will use strcat:" << "\n" << in_string << endl;
	strcpy_s(in_string, in_string1);
	cout << "If we will use strcpy:" << "\n" << in_string << endl;
	char name = 'a';
	char number = '9';
	cout << name << " is digit? - "; isdigit(name) ? cout << "True\n" : cout << "False \n";
	cout << number << " is digit? - "; isdigit(number) ? cout << "True\n" : cout << "False\n";
	cout << name << " is alpha? - "; isalpha(name) ? cout << "True\n" : cout << "False\n";
	cout << name << " is upper? - "; isupper(name) ? cout << "True\n" : cout << "False\n";
	cout << name << " to upper - "; toupper(name) ? cout << "True\n" : cout << "False\n";
	

	system("Pause");
	return 0;

}
