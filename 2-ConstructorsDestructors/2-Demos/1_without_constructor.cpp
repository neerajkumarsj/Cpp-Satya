#include <iostream>

using namespace std;

class Item
{
	private:
		int a;
		int b;
	public:
		void get_data(int x, int y)
		{
			a = x;
			b = y;
		}

		void put_data(void)
		{
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}		
};

int main()
{
	Item I;
	I.get_data(10, 20); // Extra work
	//Inbuilt
	//int a = 10;
}
