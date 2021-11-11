1. Attempting to open a file in read mode, but th file doesn't exist.
	Code: ifstream ifile("filename.file");
		  if (!ifile)
		  {
		  	  cout << "File Doesnt Exist" << endl;
		  }

2. Trying to open a file, in write mode which is already marked as read-only
	Code: ofstream ofile("filename.file");
		  if (!ofile) || or if (ofile.bad())
		  {
		  	  cout << "File Already Exists, But Marked as Read-Only" << endl;
		  }
3. Attempting to read the file beyond EOF marker
	Code: while (!ifile.eof())
		  {
			 
		  }

4. Processing Un-opened file.
	Code: ifile.read()
	      if (ifile.fail())
		  {
		     cout << "File is not Opened" << endl;
		  }

5. Sufficient Disk Space is not available while writing to a file

6. Stream Object created but not connected to a file.

7. Media Errors: Reading or Writing a file

8. .eof() -> returns True if EOF is encounterd, then returns False.
   .fail() -> returns True if read/write Operation has failed.
   .bad() -> it will return true if invalid operation is attempted, else false.
   .good() -> it will return true if operation is succesful, else false.

9. Filter Utilities. -Passing Filenames in Command Line Arguments.
