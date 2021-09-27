/*
	Topic Static Member functions
	Property number 1: A static Function can have access to other static memebers(functions or variables), declared in the same class.
	Property number 2: The static member function can be called using the class name(Instead of its objects)
*/

#include <iostream>
using namespace std;

class Item
{
	private:
		int num;
		static int count;
	public:
		void set_num(void);
		void show_num(void);
		static void show_count(void)
		{
			cout << "Count: " << count << endl;
			//num = 20;
			/* According to property number 1, its an error.
			1_static_member_functions.cpp:21:4: error: invalid use of member ‘Item::num’ in static member function
		   21 |    num = 20;
		      |    ^~~
			01_static_member_functions.cpp:13:7: note: declared here
		   13 |   int num;
			  |       ^~~

			*/
		}
};

int Item::count;

void Item::set_num(void)
{
	num = ++count;
}

void Item::show_num(void)
{
	cout << "Num Value: " << num << endl;
}

//static void Item::show_count(void)

int main()
{
	Item A, B;
	A.set_num();
	B.set_num();
	Item::show_count();
	A.show_num();
	B.show_num();
}
