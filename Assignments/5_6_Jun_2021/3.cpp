/*
	Topic: Difference of Date of Births
	===================================
*/

#include <iostream>
using namespace std;

class DOB
{
	private:
		int d, m, yr;
	public:
		DOB(){}
		DOB(int x, int y, int z)
		{
			if (x >= 1 && x <= 31 && y >= 1 && y <= 12)
			{
				d = x;
				m = y;
			}
			else
			{
				cout << "Error: Wrong Date of Birth" << endl;
			}
			yr = z;
			cout << "Entered DOB is " << d << "/" << m << "/" << yr << endl;
		}
		friend DOB dif_DOB(DOB T1, DOB T2);
		void show_data(void);
};

DOB dif_DOB(DOB T1, DOB T2)
{
	DOB res;
	res.d = (T1.d - T2.d);
	res.m = T1.m - T2.m - (res.d / 30);
	res.d = res.d % 30;
	cout << T1.yr << "\t" << T2.yr << endl;
	res.yr = T1.yr - T2.yr - (res.m / 12);
	res.m = res.m % 12;
	return res;
}

void DOB::show_data(void)
{
	cout << "Difference of Dates are \nDays " << d << " Months " << m << " Years: " << yr << endl;
}


int main()
{
	DOB T1(22,8,1996) , T2(22,6,2021) , T3;
	T3 = dif_DOB(T1, T2);
	T3.show_data();
}
