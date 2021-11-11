/*
	Saving And Retrieving Object to a file
*/
#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;


class Person
{
	char *name;
	int age;
	public:
		Person(){}
#if 0
		Person(const char *n, int a)
		{
			name = new char[strlen(n) + 1];
			strcpy(name, n);
			age = a;
		}
#endif
		friend istream& operator >> (istream &in, Person *P);
		friend ostream& operator << (ostream &out, Person *P);

		~Person()
		{
			cout << "Freeing Memory allocated for array \n";
			delete name;
			name = NULL;
			cout << "Memory Freed \n";
		}
		
};

#if 0
istream& operator >> (istream &in, Person &P)
{
	char name[20];
	cout << "Enter the Name: " ;
	cin >> name;
	P.name = new char[strlen(name) + 1];
	in >> P.name;
	cout << "Enter the age: ";
	in >> P.age;
	return in;
}
#endif
istream& operator >> (istream &in, Person *P)
{
	char name[20];
	cout << "Enter the Name: " ;
	cin >> name;
	P->name = new char[strlen(name) + 1];
	strcpy(P->name, name);
	//in >> P->name;
	cout << "Enter the age: ";
	in >> P->age;
	return in;
}

ostream& operator << (ostream &out, Person *P)
{
	out << "Name: " << P->name << '\n' << "Age: " << P->age << endl;
	return out;
}

int main()
{
	Person *P, *Q;
	P = new Person;
	Q = new Person;
	// Open a file in Binary Write mode
	char ch, filename[100];
	cout << "Enter the file to stored: ";
	cin >> filename;
	ofstream ofile(filename, ios::binary);
	ifstream ifile(filename, ios::binary);

	if (!ifile)
	{
		cerr << "Error: " << filename << "File Not Found!" << endl;
	}
	
	do
	{
		//Read Object 
		//cin >> *P;
		cin >> P;

		//Write object to the Output File
		ofile.write((char *)P, sizeof(*P));
		cout << "Do you want to add data: ";
		cin >> ch;

	}while(toupper(ch) == 'Y');

#if 1
	ofile.close();
	
	char chart;
	//Open the File Binary Read Mode
	ifile.seekg(0);
	while (ifile)
	{
		ifile.read((char *)Q, sizeof(*Q));
		cout << Q << endl << flush;
	}
	ifile.close();
#endif

}


/*

Output:
	Name: Neeraj
	Age: 25

	Name: Pramod
	Age: 18

*/
