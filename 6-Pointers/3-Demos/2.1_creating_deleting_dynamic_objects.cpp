/*
1. Dynamic 
	C - malloc, calloc, realloc, free
	run-time
	Heap segment
2. C++
	- new and delete are operators
	- Runtime
	- Heap
*/
#include <iostream>
using namespace std;

class Sample
{
	private:
		int *a;
		int *b;
	public:
		Sample()
		{
			cout << "Constructing an object\n";
			a = new int;
			b = new int;
			*a = 10;
			*b = 20;
		}
		~Sample()
		{
			cout << "Deleting data members!!!\n";
			delete a;
			delete b;
			cout << "Data Members deleted successfully!!!\n";
		}
};

int main()
{
	//Sample A; //Static mem alloc.
	Sample *ptr = new Sample;

	cout << "Deleting an object\n";
	delete ptr;
	cout << "Object deleted successfully!!!\n";
	ptr = NULL;

}
