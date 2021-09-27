/*
	User Defined Template
*/

#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
	char name[20];
	int age;
}; 

struct Employee
{
	char name[20];
	int age;
};

template <class T>
void display(T &data)
{
	cout << "name: " << data.name << endl;
	cout << "Age: " << data.age << endl;
}

#if 0
template <class T>
ostream& operator << (ostream &out, T &t)
{
	out << "name: " << t.name << endl;
	out << "Age: " << t.age << endl;
	return out;
}
#endif

int main()
{
	Student S;
	strcpy(S.name, "Neeraj");
	S.age = 20;
	display(S);

	Employee E;
	strcpy(E.name, "Pramod");
	E.age = 39;
	display(E);
}
