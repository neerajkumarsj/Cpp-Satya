/*
	Topic: Array Of Objects
	=======================
	1.  
	
*/

#include <iostream>
using namespace std;

class Student
{
	private:
		int id;
		char  name[20];
	public:
		void getdata(void)
		{
			cout << "Enter the id: " << endl;
			cin >> id;
			cout << "Enter the name: " << endl;
			cin >> name;
		}
		void putdata(void)
		{
			cout << "Id: " << id << " Name: " << name << endl; 
		}
};


int main()
{
	//Student A, B, C; //Memory Allocation will not be Contiguous, so pointer arithmatic cannot be applied.
	Student S[3];
	Student *P = S;

	for (int i = 0; i < 3; i++)
	{
	//	S[i].getdata();
	//	P[i].getdata();
		P->getdata();
		P++;
	}
	P = S;
	for (int i = 0; i < 3; i++, P++)
	{
	//	S[i].putdata();
	//	P[i].putdata();
		P->putdata();
	}
}
