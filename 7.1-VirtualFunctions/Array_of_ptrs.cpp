/*
	Topic: Array of Pointers
	========================
*/

#include <iostream>
using namespace std;

class Graphics
{
	public:
		virtual void draw()
		{
			cout << "Point" << endl;  
		}
};

class Line: public Graphics
{
	public:
		void draw()
		{
			cout << "Line" << endl;  
		}
	
};

class Triangle: public Graphics
{
	public:
		void draw()
		{
			cout << "triangle" << endl;  
		}
	
};
class Rectangle: public Graphics
{
	public:
		void draw()
		{
			cout << "Rectangle" << endl;  
		}
	
};

class Circle: public Graphics
{
	public:
		void draw()
		{
			cout << "Circle" << endl;  
		}
	
};

int main()
{
	Graphics G;
	Line L;
	Triangle T;
	Rectangle R;
	Circle C;
	
	Graphics *gp[] = {&G, &L, &T, &R, &C};
	
	for (int i = 0; i < 5; i++)
	{
		gp[i]->draw();
	}
}
