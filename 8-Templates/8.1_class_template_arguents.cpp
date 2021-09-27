/*

	Topic: Class template with Multiple Arguments
	=============================================
*/


#include <iostream>
using namespace std;

template <class T, unsigned S>
class Vector
{
	T *ptr;
	public:
		Vector(void)
		{
			ptr = new T[S];
		}
		
		~Vector()
		{
			delete ptr;
			ptr = NULL;
		}
		
		void display(void);
};

template <class T, unsigned S>
void Vector<T, S>::display(void)
{
	for (int i = 0; i < S; i++)
	{
		cout << *(ptr + i) << endl;
	}
}

int main()
{
	Vector <int, 5> V;
	V.display();
}
