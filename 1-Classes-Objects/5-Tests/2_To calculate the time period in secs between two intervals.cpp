#include <iostream>
using namespace std;

class Times
{
	private:
		int h, m, s;
	public:
		void get_data(void);
		friend Times sum_times(Times T1, Times T2);
		void show_data(void);
};


void Times::get_data(void)
{
	cout << "Enter the Time in \nHours: ";
	cin >> h;
	cout << "Minutes: ";
	cin >> m;
	cout << "Seconds: ";
	cin >> s;
}	

Times sum_times(Times T1, Times T2)
{
	Times res;
	res.s = (T1.s + T2.s);
	res.m = (res.s / 60) + T1.m + T2.m;
	res.s = res.s % 60;
	res.h = (res.m / 60) + T1.h + T2.h;
	res.m = res.m % 60;
	return res;
}

void Times::show_data(void)
{
	cout << "Added Time is \nHours: " << h << " Minutes: " << m << " Seconds: " << s << endl;
}


int main()
{
	Times T1, T2, T3;
	T1.get_data();
	T2.get_data();
	T3 = sum_times(T1, T2);
	T3.show_data();
}
