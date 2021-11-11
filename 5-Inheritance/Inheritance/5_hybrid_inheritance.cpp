/*
	Topic: Hybrid INheritance
	1. Hybrid = Mulilevel + Multiple
*/

#include <iostream>
using namespace std;

class Student
{
	protected:
		int roll_no;
	public:
		void get_Roll(int x)
		{
			roll_no = x;
		}
		void put_Roll(void)
		{
			cout << "Roll NUmber is : " << roll_no << endl;
		}
};

class Test:public Student
{
	protected:
		float marks_1, marks_2;
	public:
		void get_marks(float x, float y)
		{
			marks_1 = x;
			marks_2 = y;
		}
		void put_marks(void)
		{
			cout << "Marks are: " << marks_1 << "\t" << marks_2 << endl;
		}
};

class Sports
{
	protected:
		float score;
	public:
		void get_score(int x)
		{
			score = x;
		}

		void put_score(void)
		{
			cout << "Score are: " << score << endl;
		}
};

class Result:public Test, public Sports
{
	private:
		float total;
	public:
		void display(void)
		{
			put_Roll();
			put_marks();
			put_score();
			total = marks_1 + marks_2 + score;
			cout << "Total :" << total << endl;
		}
};


int main()
{
	Result R;
	R.get_Roll(100);
	R.get_marks(10, 20);
	R.get_score(5);
	R.display();
}































