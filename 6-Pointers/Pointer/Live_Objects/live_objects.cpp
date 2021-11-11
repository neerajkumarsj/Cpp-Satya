/*
	Topic: Live Objects 
	-------------------
	Note: 1. Definition: Objects Created dynamically, with their data members intialised during creation.
		  2. To create a live Object, the constructor must be invoked automatically.
		  3. Destructor for an object must be invoked automatically, before the memory for the objects is deallocated.
		  4. Atleast one constructor is a must, for a live object.
*/


#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	private:
		int roll_no;
		char *name;
	public:
		Student()
		{
			char flag;
			char str[20];
			cout << "Do You Want to Intialise the OBject[Y/N] ?: " << endl;
			cin >> flag;
			if (flag == 'Y' || flag == 'y')
			{
				cout << "Enter the Roll Number: " << endl;
				cin >> roll_no;
				cout << "Enter the name of the student: " << endl;
				cin >> str;
				name = new char[strlen(str) + 1];
				strcpy(name, str);
			}
			else
			{
				roll_no = 0;
				name = NULL;
			}
		}
		Student(int x)
		{
			roll_no = x;
			name = NULL;
		}
		Student(int x, const char *ptr)
		{
			roll_no = x;
			name = new char[strlen(ptr) + 1];
			strcpy(name, ptr);
		}
		~Student()
		{
			if (name)
			{
				cout << "Deleting the name Successfully\n ";
				delete name;
				name = NULL;
			}
		}

		void display(void)
		{
			if (roll_no)
			{
				cout << "Roll Number is : " << roll_no << endl;
			}

			if (name)
			{	
				cout << "The Name is : " << name << endl;
			}
			else
			{
				cout << "Name: Not Intialised! " << endl;
			}

		}
};


int main()
{
	Student *A;
	A = new Student;
	
	A->display();
	delete A;
	A = NULL;
	
	Student *B = new Student(10);
	B->display();
	delete B;
	B = NULL;

	Student *C = new Student(20, "Rama");
	C->display();
	delete C;
	C = NULL;
}
