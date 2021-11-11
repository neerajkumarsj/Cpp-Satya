/*
	Topic: Function Pinters
	=======================
*/

#include <iostream>
#include <cstdlib>
using namespace std;

//void (*set_new_handler(void (*my_handler))())(); 
//Signal Handler
void Out_of_Memory(void)
{
	cout << "Memory Exhausted, Cannot Allocate" << endl;
	exit(1);
}

int main()
{
	int *ip;
	long unsigned total = 0UL;
	set_new_handler(Out_of_Memory);
	while (1)
	{
		ip = new int[10000];
		total = total + 10000UL;
		cout << "Total Bytes Allocated: " << total << endl;
	}
}
