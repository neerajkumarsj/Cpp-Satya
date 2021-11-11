#include <iostream>

using namespace std;
class BubbleSort
{
	private:
		int n, i;
		int *num;

	public:
		void getdata(void);
		void putdata(void);
		void bubblesort(char *);
};

void BubbleSort::getdata(void)
{
	cout << "Enter the number of Elements: " << endl;
	cin >> n;
	num = (int *)malloc(n * sizeof(int));
	cout << "Enter the array elements" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	cout << "=====================================" << endl;
}

void BubbleSort::putdata(void)
{
	for (i = 0; i < n; i++)
	{
		cout << num[i] << "\t";
		
	}
	cout << endl;	
}

void BubbleSort::bubblesort(char order[3])
{
	int j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if (order[1] == 'a')
			{
				if (num[j] > num[j+1])
				{
					temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;
				}
			}
			else if(order[1] == 'd')
			{
				if (num[j] < num[j+1])
				{
					temp = num[j];
					num[j] = num[j+1];
					num[j+1] = temp;
				}
			}
		}
	}
}


int main(int argc, char **argv)
{
	#if 1
	if (argc == 2 && (argv[1][1] == 'd' || argv[1][1] == 'a'))
	{
		BubbleSort P;
		P.getdata();
		P.bubblesort(argv[1]);
		P.putdata();
	}
	else if (argc != 2)
	{
		cout << "Enter a valid number of arguments" << endl;

	}
	else if (argv[1] != "-a" || argv[1] != "-d" )
	{
		cout << "Enter a valid Argument \n 1. Ascending order = -a \n 2. Descending Order = -d " << endl;
	}
	#endif
}
