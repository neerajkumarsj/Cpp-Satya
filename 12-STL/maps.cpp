/*
	1. Maps	 is equvivalent to Dicctionary in python
	2. Contains Key Value Pair
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef map<string, int> phoneMap;
void display(phoneMap &M)
{
	int i;
	phoneMap::iterator p;
	//for (p = M.begin(); p != M.end(); p++)
	for (p = M.begin(), i = 0; i < M.size(); i++)
	{
		//cout << (*p).first << " : " << (*p).second << endl;
		cout << p->first << " : " << p->second << endl;
		p++;
	}
}

int main()
{
	string name;
	int number;

	//map <string, int> Phone;
	phoneMap Phone;
	cout << "Enter Two Names and Numbers of the customer :" << endl;
	for (int i = 0; i < 2; i++)
	{
		cin >> name;
		cin >> number;
		Phone[name] = number;
	}

	display(Phone);
	Phone["Satya"] = 489; // Added to the last;
	Phone.insert(pair<string, int> ("Chaya", 753)); //Added to the start
	display(Phone);
}
