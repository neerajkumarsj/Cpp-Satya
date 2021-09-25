/*
	Version: 2
	Topic: Conversion Between Objects of Different Classes
	======================================================
	1. Program- Convert Degree to Radian and vice-versa.
	Formulas: Deg = Rad * (180/ pi)
			  Rad = Deg * (pi/ 180)

*/
#include <iostream>
#define PI 3.14
using namespace std;


class Degree
{
	private:
		float deg;
	public:
		Degree(){}
		Degree(float x)
		{
			deg = x;
		}

		void getDegree(void)
		{
			cout << "Enter the Degree: ";
			cin >> deg;
		}

		float return_deg(void)
		{
			return deg;
		}

		void display(void)
		{
			cout << "The Updated Degree value is: " << deg << endl;
		}		

		
};

class Radian
{
	private:
		float rad;
	public:
		Radian(){}
		Radian(Degree D)
		{
			rad = D.return_deg() * PI /180.0; 
		}

		void getRadian(void)
		{
			cout << "Enter the Radians: ";
			cin >> rad;
		}

		void display(void)
		{
			cout << "The Updated Radian value is: " << rad << endl;
		}

		operator Degree()
		{
			return Degree(rad * 180/ PI);
		}

};
int main()
{
	Degree D;
	Radian R;

	R.getRadian();
	D = R; 
	D.display();

	D.getDegree();
	R = D; //Radian R(D)
	R.display();
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
