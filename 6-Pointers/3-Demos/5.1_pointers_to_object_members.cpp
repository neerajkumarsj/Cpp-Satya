#include <iostream>
using namespace std;

class Item
{
	private:
		int y;
	public:
		int a;
		int b;
		int init(int x)
		{
			a = x;
			return x;
		}
};

int main()
{
	Item Obj;
	Item *Optr;
	Optr = &Obj;

	//Declare pointer to data member
	//Syntax: DataType Class_Name::*iptr;
	int Item::*iptr;
	//1. int specifies to which variable it is pointing.
	//2. This pointer points to variable which is of only int data type.

	//Initialize the pointer to 'a'
	iptr = &Item::a;

	//Init the value via pointer iptr
	Obj.*iptr = 10;
	cout << "The value of a: " << Obj.*iptr << endl;

	iptr = &Item::b;
	Optr->*iptr = 20;
	cout << "The value of b: " << Optr->*iptr << endl;

	//iptr = &Item::y;

	//Syntax: Declaring pointer to member function
	//return_type (class_name::*fptr_name)(parameter list);
	int (Item::*fptr)(int);

	//Init the function pointer
	fptr = &Item::init;

	//Invoke the member function
	//Object name
	cout << "Value: " << (Obj.*fptr)(10) << endl;

	//Object pointer
	cout << "Value: " << (Optr->*fptr)(100) << endl;


}















