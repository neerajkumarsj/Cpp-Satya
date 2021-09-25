// Highest frequency character in the given string.

#include <iostream>
#include <stdlib.h>
using namespace std;

class CharFrequency
{
	private:
		char string[50] = "Welcome to C++ Programming.";
		char max_char = '\0';
		int alpha[256] = {0};
		int max = 0;
	public:
		void check_freq(void);
};

void CharFrequency::check_freq(void)
{
	for (int i = 0; string[i] != '\0' ; i++) 
	{
		alpha[int(string[i])]++;
		if (max < alpha[string[i]] && string[i] != ' ')
		{
			max_char = string[i];
			max = alpha[string[i]];
		}
		//cout << max << "\t" << alpha[int(string[i])]++ << endl;
	}
	cout <<"'"<< max_char << "' has been occured " << max << " Times and is the maximum occured character" << endl; 
}

int main()
{
	CharFrequency C;
	C.check_freq();
}
