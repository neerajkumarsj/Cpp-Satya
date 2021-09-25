#include <iostream>
using namespace std;

class Array
{
	private:
		int size;
		int *arr;
	public:
		Array(int n) //Constructor
		{
			size = n;
			arr = new int[size];
			cout << "Array is constructed \n";
		}
		
		~Array()  //Destructor
		{
			cout << "Freeing Memory allocated for array \n";
			delete arr;
			arr = NULL;
			cout << "Memory Freed \n";
		}
};


int main()
{
	Array A(5);
}
