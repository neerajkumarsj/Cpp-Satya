/*
	Topic: Need for Virtual Functions
	=================================
*/

#include <iostream>
#include <cstring>
using namespace std;

class Father
{
	protected:
		char *fname;
	public:
		Father(const char *name)
		{
			fname = new char[strlen(name) + 1];
			strcpy(fname, name);
		}
		virtual void display(void)
		{
			cout << "Father Name: " << fname << endl;
		}
		virtual ~Father()
		{
			delete fname;
			cout << "~Father is Invoked" << endl;
		}
};

class Son: public Father
{
	protected:
		char *sname;
	public:
		Son(const char *name,const char *xname): Father(name)
		{
			sname = new char[strlen(xname) + 1];
			strcpy(sname, xname);
		}
		void display(void)
		{
			cout << "Son's Name: " << sname << endl;
		}
		~Son()
		{
			delete sname;
			cout << "~Sname is Invoked" << endl;
		}

};


int main()
{
	Father *fp;
	fp = new Father("Ram");
	fp->display();
	delete fp;

	fp = new Son("Ram", "Lava");
	fp->display();
	delete fp;
}
