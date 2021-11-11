/*

	Topic: Need for Virtual Functions
	=================================
*/

#include <iostream>
#include <cstring>
using namespace std;

class Father
{
	private:
		char name[20];
	public:
		Father(const char *fname)
		{
			strcpy(name, fname);
		}
		virtual void display(void)
		{
			cout << "Father Name: " << name << endl;
		}
};

class Son: public Father
{
	private:
		char name[20];
	public:
		Son(const char *fname,const char *sname): Father(fname)
		{
			strcpy(name, sname);
		}
		void display(void)
		{
			cout << "Son's Name: " << name << endl;
		}
};


int main()
{
	//Father F("Xavier");
	//Father *fp = &F;
	//fp->display();
	Father *fp;

	Son S("Xavier", "Ram");
	fp = &S;
	fp->display();
}
