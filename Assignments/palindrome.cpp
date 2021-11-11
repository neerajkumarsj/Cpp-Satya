#include <iostream>
using namespace std;

//Class for Palindrome
class Palindrome{
	private:
		int num;
		int temp;
		int rev = 0;
		int flag = 0;
	public:
		void getdata(void);
		void reverse(void);
		void ispalindrome(void);
};

void Palindrome::getdata(void)
{
	//Input Function
	cout<< "Enter the number: \n";
	cin >> num;
}

void Palindrome::ispalindrome(void)
{
	//Checks is the reversed number is a Palindrome
	if (flag == 1)
	{
		cout << "Its a plindrome" << endl;
	}
	else
	{
		cout << "Its not palindrome" << endl;
	}
}

void Palindrome::reverse(void)
{
	//Reverses the given Number
	temp = num;
	while (num)
	{
		rev = (rev * 10) + (num % 10);
		num /= 10;
	}
	if (rev == temp)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
}

int main()
{
	//Defining the main
	Palindrome P;
	P.getdata();
	P.reverse();
	P.ispalindrome();
}
