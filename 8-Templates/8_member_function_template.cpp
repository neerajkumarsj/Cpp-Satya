/*

	Topic: Member Function template
	===============================
*/


#include <iostream>
using namespace std;

template <class T>
class Vector
{
	T *ptr;
	unsigned size;
	public:
		Vector(unsigned s)
		{
			size = s;
			ptr = new T[size];
		}
		
		~Vector()
		{
			delete ptr;
			ptr = NULL;
		}
		
		void display(void);
};

template <class T>
void Vector<T>::display(void)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(ptr + i) << endl;
	}
}

int main()
{
	Vector <int> V(5);
	V.display();
}
