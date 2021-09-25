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
		void getdata(void)
		{
			int local; //This variables memory is not part of data memebers.
			cout << "Enter two numbers: \n";
			cin >> num1 >> num2;
		}

		void putdata(void)
		{
			cout << "Res: " << res << endl; 
		}

		void add(void)
		{
			res = num1 + num2;
		}
};

int main()
{
	//Create an object
	Add A;
	A.getdata();
	A.add();
	A.putdata();

	cout << "sizeof(A): " << sizeof(A) << enidl;

	Add B;

	//A.num1 = 10;
}
