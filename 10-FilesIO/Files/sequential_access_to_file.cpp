/*
	Topic: Sequential Access To files
	=================================
	put() and get()
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char ch, buffer[80] = "\0";
	fstream file("hello.txt", ios::in|ios::out);
	cout << "Enter the string: " ;
	cin.getline(buffer, 79);
	for (int i = 0; buffer[i]; i++)
	{
		file.put(buffer[i]);
	}
	file.seekg(0);
	while (file)
	{
		file.get(ch);
		cout << ch;
	}
}
