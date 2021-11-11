// 2D array of One Class of 2 objects

#include <iostream>
using namespace std;

const int n = 5;
//class Sample; //Forward Declaration

class Item
{
	private:
		int arr1[n];
		int arr2[n];
		int arr3[n];
	public:
		friend Item copy(Item I);
		void read_array(void);
		void display(void);
};


void Item::read_array(void)
{
	cout << "Enter the aray Item: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	cout << "Enter the aray Item: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}
}

void Item::display(void)
{
	cout << "The Items are: "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr3[i] << "\t";
	}
	cout << endl;
}

Item  arr_add(Item I)
{
	for (int i = 0; i < n; i++)
	{
		I.arr3[i] = I.arr1[i] + I.arr2[i];
	}
	return I;
}

int main()
{
	Item I;
	I.read_array();
	I = arr_add(I);
	I.display();
}



