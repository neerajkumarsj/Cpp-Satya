/*
	4. Mathematical operations on Strings
    - Overloading +
    - Overloading <=
*/
#include <iostream>
#include <cstring>
using namespace std;

class String
{	
	private:
		char *p;
		int len;
	public:
		String()
		{
			len = 0;
			p = NULL;
		}
		String(const char *s)
		{
			len = strlen(s) + 1;
			p = new char[len];
			strcpy(p, s);
		}
		friend String operator+(String S1, String S2);
		void display(void);
};

String operator+(String S1, String S2)
{
	String temp;
	int i;
	temp.len = S1.len + S2.len;
	temp.p = new char[temp.len];
	for (i = 0; i < S1.len ; i++)
	{
		temp.p[i] = S1.p[i];
	}
	temp.p[i] = ' ';
	for (i = 0; i < S2.len; i++)
	{
		temp.p[S1.len + i + 1] = S2.p[i];
	}
	temp.p[temp.len + 1] = '\0';
	/*	
	strcpy(temp.p, S1.p);
	*(temp.p + S1.len) = ' ';
	*(temp.p + S1.len + 1) = '\0';
	strcat(temp.p, S2.p);
	*(temp.p + S1.len) = ' ';
	temp.p = temp.p + S1.len + 1;
	cout << "String at concat: "  << temp.p << endl;
	temp.p = (temp.p) - temp.len;
	*/
	return temp;
}

void String::display(void)
{
	cout << "The Updated String is: " << p << endl;
}


int main()
{
	String S1 = "Neeraj";// String S1("Neeraj")
	String S2 = "Kumar";
	String S3;
	S3 = S1 + S2;
	S3.display();
}

