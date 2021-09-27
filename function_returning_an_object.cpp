// 2D array of One Class of 2 objects

#include <iostream>
using namespace std;

const int n = 5;
//class Sample; //Forward Declaration

class Item
{
	private:
		int arr[n];
	public:
		friend Item arr_add(Item J, Item K);
		void read_array(void);
		void display(void);
};


void Item::read_array(void)
{
	cout << "Enter the aray Item: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void Item::display(void)
{
	cout << "The Items are: "<< endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

Item arr_add( Item J, Item K)
{
	Item temp;
	for (int i = 0; i < n; i++)
	{
		temp.arr[i] = J.arr[i] + K.arr[i];
	}
	return temp;
}

int main()
{
	Item I, J, K;
	J.read_array();
	K.read_array();
	I = arr_add(J, K);
	I.display();
}



