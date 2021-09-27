#include <iostream>
using namespace std;

const int n = 5;
class Sample; //Forward Declaration

class Item
{
	private:
		int arr[n];
	public:
		friend Sample copy(Item I);
		void read_array(void);
};


void Item::read_array(void)
{
	cout << "Enter the aray Item: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

class Sample
{
	private:
		int arr[n];
	public:
		friend Sample copy(Item I);
		void display(void) const;
};

void Sample::display(void)
{
	cout << "The Items are: "<< endl;
	//arr[2] = 100;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

Sample copy(Item I)
{
	Sample temp;
	for (int i = 0; i < n; i++)
	{
		temp.arr[i] = I.arr[i];
	}
	return temp;
}

int main()
{
	Item I;
	I.read_array();
	Sample S;
	S = copy(I);
	S.display();
}
