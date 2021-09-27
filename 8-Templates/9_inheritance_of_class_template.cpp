/*
	Topic: Inheritance of Class Template
	====================================
	1. Base class contians template, so also the derived class.
	2. Base class contains template, so also the derived class with extended arguments.
		-
	3. Base class with no template, derived class can contain the template.
	4. Base class contains the template, it is not necassary to contain in the derived class.
	**
*/

#include <iostream>
using namespace std;
const int MAX = 10;

enum boolean
{
	FALSE, TRUE
};

template <class T>
class Bag//Base Class
{
	protected:
		T array[MAX];
		int item_count;
	public:
		Bag()
		{
			item_count = 0;
		}

		void put(T item)
		{
			array[item_count++] = item;
		}

		boolean isEmpty()
		{
			return item_count == 0 ? TRUE: FALSE;			
		}

		boolean isFull()
		{
			return item_count == MAX ? TRUE: FALSE;			
		}

		boolean isPresent(T item);
		void display(void);
};

template <class T>
boolean Bag <T>::isPresent(T item)
{
	for (int i = 0; i < item_count ; i++)
	{
		if (array[i] == item)
		{
			return TRUE;
		}
	}
	return FALSE;
}

template <class T>
void Bag<T>::display(void)
{
	for (int i = 0; i < item_count; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

template <class S>
class Set: public Bag <S>
{
	public:
		void add(S item)
		{
			if (!(this->isPresent(item)) && !(this->isFull()))
			{
				this->put(item);
			}
		}

		void read(void)
		{
			S item;
			while (TRUE)
			{
				cout << "Enter The Item: ";
				cin >> item;
				if (item == 0)
				{
					break;
				}
				add(item);
			}
		}
};



int main()
{
	Set <int> S1;
	cout << "Enter Set 1 items: " << endl;
	S1.read();
	S1.display();
}

