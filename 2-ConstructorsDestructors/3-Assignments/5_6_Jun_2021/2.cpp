/*
	Assignment 2: String Concatenate:wq
	==================================
*/

#include <iostream>
using namespace std;

class String
{
        private:
                char *str;
            	int size;
        public:
			String(){};
            String(char *s)
            {
            	for (size = 0; s[size] != '\0' ; size++); 
                str = new char[size];
                for (int i = 0; s[i] != '\0'; i++)
				{	
					str[i] = s[i];
				}
            }
            friend String concat(String S1, String S2);
            void display(void)
            {
            	cout << endl << "The Updated String is" << endl;
				for (int i = 0; str[i] != '\0' ; i++)
				{
					cout << str[i];
				}
				cout << endl;
			}
};

String concat(String S1, String S2) 
{   
	String temp;
	temp.size = S1.size + S2.size;
    temp.str = new char [temp.size];
    int i = 0;
    int j = 0;
    while (i < temp.size + 1)
    {  
    	if (S1.str[j] != '\0')
        {
            while (S1.str[j] != '\0')
            {
				temp.str[i] = S1.str[j];
				i++;
				j++;
            }
            temp.str[i++] = ' ';
        }
        else
        {
			j = 0;
            while (S2.str[j] != '\0')
            {
			    temp.str[i] = S2.str[j];
			    i++;
			    j++;
            }
        }
    }  
    return temp;
}   

int main()
{
	String S1("Neeraj");
	String S2("Kumar");
	String S3("Techie");
	String S4, S5;
	S4 = concat(S1, S2);
	S5 = concat(S3, S4);
	S4.display();
	S5.display();
}



