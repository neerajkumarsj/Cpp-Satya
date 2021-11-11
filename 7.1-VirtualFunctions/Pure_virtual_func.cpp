/*
	Topic: Pure Virtual Function
	============================
*/

#include <iostream>
using namespace std;

class Number
{
	protected:
		int num;
	public:
		void get_data(void)
		{
			cout << "Enter an Integer Number: " << endl;
			cin >> num;
		}

		virtual void convert_display(void) = 0; //Syntax :- Pure Virtual Functions 
		
		//virtual void convert_display(void)//Syntax: Impure Virtual Functions
		//{}
};

class Octal: public Number
{
	public:
		void convert_display(void)
		{
			cout << "Octal Equivalent of " << num << " = ";
			cout.unsetf(ios::dec); 
			cout.setf(ios::oct | ios::showbase);
			cout << num << endl;
			cout.unsetf(ios::oct);
			cout.setf(ios::dec | ios::showbase);
		}
};

class Hexa: public Number
{
	public:
		void convert_display(void)
		{
			cout << "Hexadecimal Equivalent of " << num << " = ";
			cout.unsetf(ios::dec); 
			cout.setf(ios::hex | ios::showbase);
			cout << num << endl;
			cout.unsetf(ios::hex);
			cout.setf(ios::dec | ios::showbase);
		}
};

int main()
{
	Octal O;
	Hexa H;

	O.get_data();
	O.convert_display();

	H.get_data();
	H.convert_display();
}
