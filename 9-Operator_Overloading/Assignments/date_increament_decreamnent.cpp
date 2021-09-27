/*
	Topic: Operator Overloadng : Increamenting/Decreamenting the given Data
	=======================================================================
	To be Asked:
		How to increament / decreament: Day, Hour, etc wise only
*/
#include <iostream>
#include <ctime>

using namespace std;

class DateWithTime
{
	private:
		int day, month, year, hour, min, sec;
	public:
		DateWithTime(){}
		DateWithTime(int u, int v, int w, int x, int y, int z)
		{
			day = u;
			month = v;
			year = w;
			hour = x;
			min = y;
			sec = z;
		}
		
		DateWithTime sub(DateWithTime T2)
		{
			DateWithTime res;
			res.sec = sec - T2.sec;
			res.min = min - T2.min - (res.sec / 60);
			res.sec = res.sec % 60;
			res.hour = hour - T2.hour - (res.min / 60);
			res.min = res.min % 60;
			res.day = day - T2.day - (res.hour / 24);
			res.hour = res.hour % 24;
			res.month = month - T2.month - (res.day / 30);
			res.day = res.day % 30;
			res.year = year - T2.year - (res.month / 12);
			res.month = res.month % 12;
			return res;
		}

		DateWithTime add(DateWithTime T2)
		{
			DateWithTime res;
			res.sec = sec + T2.sec;
			res.min = min + T2.min + (res.sec / 60);
			res.sec = res.sec % 60;
			res.hour = hour + T2.hour + (res.min / 60);
			res.min = res.min % 60;
			res.day = day + T2.day + (res.hour / 24);
			res.hour = res.hour % 24;
			res.month = month + T2.month + (res.day / 30);
			res.day = res.day % 30;
			if (res.month % 12 || 0 && T2.year != 0)
			{
				res.year = (year + 1);
			}
			else
			{
				res.year = year;
			}
			return res;
		}

		DateWithTime operator++()
		{
			DateWithTime N(0,0,0,0,0,1);
			*this = add(N);
			return *this;
		}
		
		DateWithTime operator--()
		{
			DateWithTime N(0,0,0,0,0,1);
			*this = sub(N);
			return *this;
		}

		void get_date(void)
		{
			cout << "Updated Date and Time is: " << day << "/" << month << "/" << year << "|" << hour << ":" << min << ":" << sec << endl;
		}

};

void sleep(float seconds){
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}

int main()
{
	DateWithTime Old(20,12,2021,22,12,24);
	DateWithTime New = --Old;
	New.get_date();
	while (true)
	{
		New = ++Old;
		New.get_date();
	}
}
