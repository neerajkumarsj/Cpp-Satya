/*
	Vectors

*/

#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> &V)
{
	for(int i = 0; i < V.size(); i++)
	{
		cout << V[i] << " ";
	}
	cout << endl;
}

int main()
{
	int x;
	vector <int> V;
	// To Check Inital Size of a Vector
	cout << "Initial Size: " << V.size() << endl;
	
	//Add elements to the vector
	for(int i = 0; i < 5; i++)
	{
		cin >> x;
		V.push_back(x);
	}

	display(V);

	//Inserting an Item at 4th Location
	vector<int>::iterator itr = V.begin();
	itr = itr + 3;
	V.insert(itr, 1, 100);
	display(V);

	//Removing 4th Item;
	V.erase(V.begin() + 3);
	display(V);
}
