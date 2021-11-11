/*
	Topic: Operations on Files using COnstructors
	=============================================
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char name[20];
	int age;
	ifstream fin("sample.txt");
	fin >> name >> age;

	cout << "Name: " << name << " Age: " << age << endl;
}
