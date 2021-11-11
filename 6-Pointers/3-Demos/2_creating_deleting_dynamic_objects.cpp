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
		int a;
		int b;
	public:
		Sample()
		{
			cout << "Constructing an object\n";
			a = 10;
			b = 20;
		}
};

int main()
{
	//Sample A; //Static mem alloc.
	Sample *ptr = new Sample;

	delete ptr;
	ptr = NULL;

}
