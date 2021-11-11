#include <iostream>
using namespace std;


class Binary
{
	private:
		int bin[8];
		int mask = 1 << 8;
		int num;
		int i = 0;
	public:
		void read(void);
		int check_binary(void);
		int count_ones(void);
		void odd_even_parity(void);
};


void Binary::read(void)
{
	cout << "Enter a number: " << endl;
	cin >> num;
	for( i = 0 << 9; i < 8; i++)
	{
		if (num & mask)
		{
			bin[i] = 1;
		}
		else
		{
			bin[i] = 0;
		}
		mask >>= 1;
	}
}

int Binary::count_ones(void)
{
	int count;
	while (i < 9)
	{
		if (check_binary() == 1 )
		{
			count++;
		}
		return count;
	}
}

int Binary::check_binary(void)
{
	if (bin[i] != 0 && bin[i] != 1)
	{
		cout << "Found a Non Binary Value Being Placed" << endl;
		return bin[i];
	}
}


void Binary::odd_even_parity(void)
{
	if (count_ones() & 1)
	{
		cout << "Odd Parity" << endl;
	}
	else
	{
		cout << "Even Parity" << endl;
	}
}


int main()
{
	Binary b;
	b.read();
	b.odd_even_parity();
}
