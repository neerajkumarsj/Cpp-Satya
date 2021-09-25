/*

	Topic: Conversion Between Objects of Different Classes
	======================================================
	1. Program- Convert Degree to Radian and vice-versa.
	Formulas: Deg = Rad * (180/ pi)
			  Rad = Deg * (pi/ 180)

*/
#include <iostream>
#define PI 3.14
using namespace std;



class Radian
{
	private:
		float rad;
	public:
		Radian(){}
		Radian(float x)
		{
			rad = x;
		}

		void getRadian(void)
		{
			cout << "Enter the Radian: ";
			cin >> rad;
		}

		float return_rad(void)
		{
			return rad;
		}

		void display(void)
		{
			cout << "The Updated Radian value is: " << rad << endl;
		}		
};

class Degree
{
	private:
		float deg;
	public:
		Degree(){}
		Degree(Radian R)
		{
			deg = R.return_rad() * 180 / PI;
		}

		void getDegree(void)
		{
			cout << "Enter the Degree: ";
			cin >> deg;
		}

		void display(void)
		{
			cout << "The Updated Degree value is: " << deg << endl;
		}		

		operator Radian()
		{
			return Radian(deg * PI / 180.0);
		}
		
};

int main()
{
	Degree D;
	Radian R;

	D.getDegree();
	R = D;
	R.display();

	R.getRadian();
	D = R; // Degree D(R)
	D.display();
}	



/*
	Notes: 
		1. Conversion Between Objects of two classes are possible by the following ways.
			1. Constructor
			2. Operator Function
		
		dest  src
		# R = D => In this case Degrees is Converted to Radians, So Operator Function should be present in Degree Class;
		# D = R => In this case Radians is Converted to Degree, So Constructor Should be present in Radians Class;
			
*/
