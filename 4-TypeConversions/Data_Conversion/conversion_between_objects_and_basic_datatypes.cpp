/*
	Conversion Between Object and Basic Data Types
	Program: Conversion between Centimeter and meter
	================================================
	1. centimeter = meter * 100
	2. meter = centimeter / 100
*/

#include <iostream>
using namespace std;

class Meter
{
	private:
		float length;
	public:
		Meter()
		{
			length = 0.0f; 
		}
		
		//Coverting from basic -> UDDT
		Meter(float len)
		{
			length = len / 100.0f;
		}
		void get_data(void)
		{
			cout << "Enter length in Meters: ";
			cin >> length;
		}
		void display(void)
		{
			cout << "Length in meters: " << length << endl;
		}
		//Converting from UDDT -> basic
		operator float()
		{
			return length * 100.0f;
		}
};

int main()
{
	Meter M;
	float length;
	cout << "Enter length in Centimeters: ";
	cin >> length;

	M = length; // Converts from basic to user defined datatypes
	M.display();

	Meter N;
	N.get_data();

	length = N; //Converts from user defined data types to basic data types
	cout << "Length in Centimeters is: " << length << endl;
}

