#include <iostream>

using namespace std;

class Student
{
	private:
		char name[20];
		int age;
		static int count;
	public:
		void get_data(void);
		void put_data(void);
};

int Student::count;
void Student::get_data(void)
{

	cout << "Enter the " << count << " Name: ";
	cin >> name;

	cout << "Enter the age : ";
	cin >> age;
	count++;
}

void Student::put_data(void)
{
	cout << "Name: "<< name << "\t";
	cout << "Age: "<< age << endl;
}

int main()
{
	Student A[3]; //Array of three objects

	for (int i = 0; i < 3; i++)
	{
		A[i].get_data();
	}

	for (int i = 0; i < 3; i++)
	{
		A[i].put_data();
	}


}
