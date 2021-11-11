/*
	List 
*/

#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;

void display(list <int> &L)
{
	list<int>::iterator p = L.begin();
	for (;p != L.end(); ++p)
	{
		cout << *p << "\t";
	}
	cout << endl;	
}


int main()
{
	list <int> L1;
	for (int i = 0; i < 5; i++)
	{
		//To add: push_back (insert at last)
		L1.push_back(rand()/ 1000);
	}
	
	display(L1);

	L1.push_front(10);
	display(L1);

}

/*
	L1 and L2: To merge: L1.merge(L2);
	To Sort: Ascending: L1.sort();
*/
