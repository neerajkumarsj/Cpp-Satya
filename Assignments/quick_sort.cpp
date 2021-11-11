#include <bits/stdc++.h>
using namespace std;

class Quick
{
	private:
		int low, high, size = 5;
		int *a, *b;
		int arr[size];
	public:
		void swap(int* , int* );
		void read(void);
		int partition (void);
		void quickSort(int *, int ,int);
		void printArray(void);

}


void Quick::swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 
int Quick::partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 
void Quick::Sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
void Quick::printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main()
{
	q = Quick;
    q.Sort(arr, 0, 5);
    cout << "Sorted array: \n";
    q.printArray();
    return 0;
}
