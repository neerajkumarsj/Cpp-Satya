#include <iostream>

using namespace std;
class BinarySearch
{
	private:
		int n, i, r, p = 0;
		int key, flag, mid = 0;
		int *num;

	public:
		void getdata(void);
		void putdata(void);
		void binarysearch();
};

void BinarySearch::getdata(void)
{
	cout << "Enter the number of Elements & key to be found:  " << endl;
	cin >> n >> key;
	
	r = n - 1;

	num = (int *)malloc(n * sizeof(int));
	cout << "Enter the array elements" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
		if (i > 2 && num[i] < num[i - 1] < num[i - 2])
		{
			cout << "Enter elements in Ascending or Descending" << endl;
			exit(0);
		}
	}
	cout << "=====================================" << endl;
}

void BinarySearch::putdata(void)
{
	cout << "The " << key << " is found @ "<< mid + 1<< endl;
}

void BinarySearch::binarysearch()
{
	char uls;
	while (flag != 1)
	{
		cout << num[mid] << "\t " << num[p] << "\t"<< num[r] << endl;
		if (p <= r)
		{	
			mid = (p + r) / 2;
		}
		if (num[mid] == key)
		{
			flag = 1;
		}
		if (num[mid] > key)
		{
			r = mid - 1;
		}
		if (num[mid] < key)
		{
			p = mid + 1;
		}
		cin >> uls;
	}
}


int main()
{
	#if 1
	BinarySearch B;
	B.getdata();
	B.binarysearch();
	B.putdata();
	#endif
}
