/*
	Topic: Conversion Between String and String Objects
	===================================================
	1. Program: To Convert String into String Objects and vice versa
*/

#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 25;

class String
{
	private:
		char arr[SIZE];
	public:
		String()
		{
			strcpy(arr, "");
		}
		String(char *message)
		{
			strcpy(arr, message);
		}
		void display(void)
		{
			cout << "The Updated String is: " << arr << endl;
		}
		operator char *()
		{
			return arr;
		}
};

int main()
{
	char message[SIZE] = "NeerajKumarSJ";
	String S;
	S = message;//Message -> char * type and S -> String type
	S.display();

	char *ptr;
	String T = (char *)("HelloEveryone");

	ptr = T; //String -> char * type
	cout << "Converted String: " << ptr << endl;
}
