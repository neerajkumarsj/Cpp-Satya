//Roots of Quadrtic Equation

#include <iostream>
#include <math.h>
using namespace std;


class Quadratic
{
	private:
		float a, b, c;
		double det, root1, root2;
	public:
		void get_data(void);
		void find_root(void);
};

void Quadratic::get_data(void)
{
	cout << "Enter the Quadratic Expression constants: " << endl;
	cin >> a >> b >> c;
}

void Quadratic::find_root(void)
{
	det = (b * b) - (4 * a *c);
	det = sqrt(abs(det));
	root1 = (-b + det)/2;
	root2 = (-b - det)/2;
	cout << "Roots are: Root1: " << root1 << "\t Root1: "<< root2 << endl;
}

int main()
{
	Quadratic Q;
	Q.get_data();
	Q.find_root();
}


