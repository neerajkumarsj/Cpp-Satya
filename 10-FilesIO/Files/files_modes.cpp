/* 
	Topic NO. 5: File Modes
	=======================
	Notes: 1. ofstream ofile("filename.txt");
		   2. How to be specify mode explicitly
		      - syntax: stream_obj.open("filename.txt", mode);
		   3. ios::in -> Open the file in the read mode;
		   4. ios::out -> Open the file in the write mode;
		   5. ios::ate -> Goto the end of the file, at the time of opening, but in read mode.
		   6. ios::app -> Goto the end of the file, at the time of opening, but in write mode.
		   7. ios::trunc -> Truncate the file if it, already exists.
		   8. ios::nocreate -> Open fails, if file does not exist.
		   9. ios::noreplace -> Open fails, if file already exist.
		   10. ios::binary -> Opens file in the binary mode.
					"hexdump <filename>" to look at Binary file.
		   11.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main()
{
	float f1 = 12.25, f2 = 3.34, f3 = 10;
	ofstream ofile("new.txt", ios::trunc);
	ofile << setiosflags(ios::showpoint | ios::fixed | ios::right);
	ofile << setw(6) << f1 << endl;
	ofile << setw(6) << f2 << endl;
	ofile << setw(6) << f3 << endl;
}
