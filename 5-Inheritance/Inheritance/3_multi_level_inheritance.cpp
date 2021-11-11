/*
	Topics: 
	1. Single Inheritance
		A.
		|
		B

    2. Multi-Lelvel-Inheritance
		A - Super Base Class / Base Class
		|
		B - Base Class / Intermediate Base Class
		|
		C - Derived Class / Derived Class
	
	3. Base - Student
	   Intermediate - Test
	   Derived Result
*/


#include <iostream>
using namespace std;

class Student
{
	protected:
		int roll_no;
	public:
		void get_roll_no(int num);
		void put_roll_no(void);
};

void Student::get_roll_no(int num)
{
	roll_no = num;
}

void Student::put_roll_no()
{
	cout << "Roll No is " << roll_no << endl;
}

class Test:public Student
{
	protected:
		float subject1;
		float subject2;
	public:
		void get_marks(float m1, float m2)
		{
			subject1 = m1;
			subject2 = m2;
		}

		void put_marks(void)
		{
			cout << "Marks are: " << subject1 << "  " << subject2 << endl;
		}	
};

class Result:public Test
{
	private:
		float total;
	public:
		void display()
		{
			total = subject1 + subject2;
//			put_roll_no();
			cout << "roll_no " << roll_no << endl;
			put_marks();
			cout << "Total Marks is: " << total << endl;
		}
};

int main()
{
	Result A;
	A.get_roll_no(100);
	A.get_marks(100.0, 200.1);
	A.display();
}
