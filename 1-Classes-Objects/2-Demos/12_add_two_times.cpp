/*
Topic: Passing objects as Parameters

Program: To add 2 times

T1: 2:45
T2: 3:30
--------
T3: 6:15
--------
Methods: 
M1: Pass by value
M2: Pass by Address
M3: Pass by Reference
*/

#include <iostream>

using namespace std;

class Time
{
	private:
		int hrs;
		int min;
	public:
		void get_time(int, int);
		void put_time(void);
		//void sum(Time , Time ); //Pass by value
		//void sum(Time &, Time &); //Pass by ref
		void sum(Time *, Time *);  //Pass by address

};

void Time::get_time(int h, int m)
{
	hrs = h;
	min = m;
}

#if 0
void Time::sum(Time & T1, Time & T2)
{
	min = T1.min + T2.min; //45 + 30 = 75
	hrs = min / 60;	// 75 / 60 = 1
	min = min % 60; // 15
	hrs = hrs + T1.hrs + T2.hrs; //1 + 2 + 3 = 6
}
#endif

void Time::sum(Time  *T1, Time  *T2)
{
	min = T1->min + T2->min; //45 + 30 = 75
	hrs = min / 60;	// 75 / 60 = 1
	min = min % 60; // 15
	hrs = hrs + T1->hrs + T2->hrs; //1 + 2 + 3 = 6
}

void Time::put_time(void)
{
	cout << "Hours: " << hrs << endl;
	cout << "Minutes: " << min << endl;
}

int main()
{
	Time T1, T2, T3;

	T1.get_time(2, 45);
	T2.get_time(3, 30);

	//T3.sum(T1, T2); //Pass by Value, ref
	T3.sum(&T1, &T2); //Pass by Address

	cout << "T1: ";
	T1.put_time();
	cout << "T2: "; 
	T2.put_time();
	cout << "T3: ";  
	T3.put_time();
}

