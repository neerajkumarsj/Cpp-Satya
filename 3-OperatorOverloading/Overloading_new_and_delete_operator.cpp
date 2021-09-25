/*
	Topics: Overloading new and delete operator
	===========================================
*/

#include <iostream>
using namespace std;

const int SIZE = 5;

class Vector
{
	private:
		int *array;
	public:
		void *operator new(size_t size)
		{
			Vector *temp;
			temp = ::new Vector;
			//temp = new Vector; - It will leads to recursive call;

			temp->array = new int[SIZE];
			return temp;
		}
		
		void operator delete(void *ptr)
		{
			Vector *temp;
			temp = (Vector *)ptr;
			delete (int *)temp->array;
			::delete temp;
			temp = NULL;
			cout << "Memory is deleted! " << endl;
		}
		void read(void)
		{
			cout << "Enter the array Itms: " << endl;
			for (int i = 0; i < SIZE; i++)
			{
				cin >> array[i];
			}
		}

		void display(void)
		{
			cout << "Enter the array Itms: " << endl;
			for (int i = 0; i < SIZE; i++)
			{
				cout << array[i] << "\t"; 
			}
			cout << endl;
		}
};

int main()
{
	Vector *ptr = new Vector;//Size of Vector will implicitly passed to operator function
	//int *p = new int;
	
	ptr->read(); //pointer to class member.
	ptr->display();
	delete ptr;

}

