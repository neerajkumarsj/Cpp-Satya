#include <iostream>
#include <math.h>
using namespace std;
class Isprime{
	private:
		int num;
		int flag = 1;
	
	public:
		void getdata(void);
		void putdata(void);
		void prime(void);
};

void Isprime::getdata(void)
{
	cout << "Enter the number: " << endl;
	cin >> num;
}

void Isprime::putdata(void)
{
	if (flag == 1)
	{
		cout << "Its a prime" << endl;
	}
	else
	{
		cout << "Its not a prime" << endl;
	}
}

void Isprime::prime(void)
{
	int i;
	for (i = 2; i <= num ; i++)
	{
		if (num % i == 0)
		{
			flag = 0;
		}
		else
		{
			flag = 1;
		}
	}
}


int main()
{
	Isprime P;
	P.getdata();
	P.prime();
	P.putdata();

}
