#include <iostream>
using namespace std;

class Item
{
	private:
		static int count;
		int number;
	public:
		void get_data(int num);
		void get_count(void);
};

int Item::count = 10;
void Item::get_data(int num)
{
	number = num;
	count++;
}

void Item::get_count(void)
{
	cout << "Count is : " << count << endl;
}

int main()
{
	Item A;
	A.get_data(100);
	A.get_count();
	
	Item B;
	B.get_data(100);
	B.get_count();
}
