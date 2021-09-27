/*
	Topic: Bubble Sort Function Templates
	=====================================
*/

#include <iostream>
#define SUCCESS 0
#define FAILURE 1
using namespace std;

template <class T>
void swap_t(T *left, T *right)
{
	T temp = *left;
	*left = *right;
	*right = temp;

}

template <class T>
int bubble_sort(T *array, int size)
{
	if (array == NULL)
	{
		return 1;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				swap_t((array + i), (array + j));				
			}
		}
	}
	return 0;
}

template <class T>
void print(T *array, int size, int stats)
{
	if (!stats)
	{	
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << "|";
		}
		cout << endl;
	}
	else
	{
		printf("Array is Lost");
	}
}

int main()
{
	int size = 5;
	int iarray[size] = {1, 6, 2, 8, 0};
	float farray[size] = {10.0, 20.0, 30.0, 40.0, 50.0};
	char carray[size] = "Chaya";

	int istat = bubble_sort(iarray, size);
	print(iarray, size, istat);
	int fstat = bubble_sort(farray, size);
	print(farray, size, fstat);
	int cstat = bubble_sort(carray, size);
	print(carray, size, cstat);
}
