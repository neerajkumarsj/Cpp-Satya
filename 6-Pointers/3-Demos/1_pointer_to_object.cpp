/*
Topic: Pointer to object
*/

#include <iostream>

using namespace std;

class Sample
{
	private:
		int a;
		int b;
	public:
		int c;
		void getdata(void)
		{
			cout << "Enter the values of a and b: " << endl;
			cin >> a >> b;
		}
		void putdata(void)
		{
			cout << "a: " << a << endl;
			cout << "b: " << b << endl;
		}		
};

int main()
{
	Sample A;
	Sample *ptr = &A;

//	A.c = 30;
	(*ptr).c = 30;
//	A.getdata();
	(*ptr).getdata();
//	A.putdata();
	(*ptr).putdata();

//Syntax: Datatype *ptr = &var;
/*
	Sample *ptr = &A;
	ptr->c = 30;
	ptr->getdata();
	ptr->putdata();
	*/
}

