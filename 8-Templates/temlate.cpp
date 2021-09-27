#include <iostream>
using namespace std;
#if 0
void swap(char &x, char &y)
{
    char temp = x;
    x = y;
    y = temp;
}


void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}


void swap(float &x, float &y)
{
    float temp = x;
    x = y;
    y = temp;
}
#endif
template <class T>
void swap(T & x, T & y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    char c1 = 'A', c2 = 'B';

    swap(c1, c2);
    cout << "Values: " << c1 << "\t" << c2 << endl;
}

