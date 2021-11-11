/*
Topic: Deferencing pointers
*/

#include <iostream>
using namespace std;

int main()
{
	int & ref = *(new int);
	//1. 4 bytes of memory will be allocated.
	//2. Heap
	//3. Pointer, normal var
	//int a = ref; //Lvalue and Rvalue
	//a = 10;
	int a = 10;
	ref = a;

	cout << "a: " << ref << endl;
}

/*
Syntax:

DataType & Ref_Var_Name = *(new Datatype);
*/

