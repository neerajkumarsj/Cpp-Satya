#include <iostream>

using namespace std;

//Define the class
class Add
{
	private:
		int num1;
		int num2;
		int res;
	public:
		void getdata(void);
		void putdata(void);
		void add(void);
		
};
void Add::getdata(void)
{
	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;

	add(); //Nesting of a member function
}

void Add::putdata(void)
{
	cout << "Res: " << res << endl; 
}

void Add::add(void)
{
	res = num1 + num2;
}

int main()
{
	//Create an object
	Add A;
	A.getdata();
//	A.add();
	A.putdata();

	//A.num1 = 10;
}
