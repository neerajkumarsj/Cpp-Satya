Day-1: 05.05.2021-Wed
---------------------
Topic-1: C Structure Revisited
------------------------------
1. printf(), scanf() ---> <stdio.h>

2. cout, cin ---> <iostream>


Topic-2: Specifying the class
-----------------------------
1. Class ---> Extension for the structure.

2. Structure:
	- Variables.
	- Fuctions cannot be a member of the structure.

3. Class:
	1. Class Declaration
	2. Class function definitions

4. General form:
	class class_name
	{
		private:
			variable declarations;
			function declarations;
		public:
			variable declarations;
			function declarations;
	};

5.	variable inside the class = Data Members
	Functions inside the class = Member functions

=======================================================================
Day-2: 06.05.2021-Thu
---------------------
Topic-2: Continue...
---------------------
1. Defining the function outside the class
	return_type class_name :: function_name(parameter_list)
	{
		//Body
	}

========================================================================
Day-3: 08.05.2021-Sat
---------------------
Topic: Making an Outside function inline
----------------------------------------
1.  inline?

2. Macros

	#define SWAP(a, b) {				\
						int temp = a;	\
						a = b;			\
						b = temp;		\
						}


	int main()
	{
		:
		:
		SWAP(x, y);
		:
		:
		:
		SWAP(m, n);
		:
		:
		:
		SWAP(p, q);
		:
		:
		:
	}

	Disadvantage:
	1. Space complexity: High
		- Code grow
		- Code Segment is high.

	2. Data type checking is not strictly possible. 

	Advantage:
	1. Time Complexity: Less
		- Sequential execution.
		- Since there is no function call, context switching will not happen.


2. To have strict data type checking.
	inline void swap(int x, int y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	int main()
	{
		:
		:
		swap(a, b);
		:
		:
		swap(x, y);
		:
		:
		swap(p, q);
		:
		:
	}

	Advantage:
	1. Space complexity: Less
	2. Type checking is possible.

	Disadvantage:
	1. Time complexity: More
	2. Context switching

3. 	
	inline void swap(int x, int y)
	- inline is only for definition not for prototype.
	

4.	main				swap()
	:					:
	:					:
	:					:
	:					:
	swap();	
	:
	:
	:
	swap();
	:
	:
	:
	swap();
	:
	:
	:

	- If context switching time is greater than the time taken to exceute the body, then inline keyword 
	will be discarded by the compiler.

	- Body of the function cannot take more time than that of context switching.

	- Compiler is free to remove the inline keyword.

5.	class Add
	{
		private:
			int a;
			int b;
		public:
			void getdata(void) //This function by default is inline
			{
				:
				:
				:
			}
	};


6.	class Add
	{
		private:
			int a;
			int b;
		public:
			void getdata(void);
	};

	inline void Add::getdata(void)
	{
		:
		:
		:
	}
========================================================================================
Day-4: 09.05.2021-Sun
---------------------
Topic: Nesting of Member functions
-----------------------------------
Topic: Private member functions
----------------------------------
========================================================================================
Day-5: 13.05.2021-Thu
---------------------
Topic- Memory Management Operators
----------------------------------
1. Two operators
	C					C++
	1.	malloc			1. new
		calloc
	
	2. realloc			2. new

	3. free				3. delete


2.	char *ptr = malloc(10); //C
	char *ptr = new 

3. Syntax:
	pointer-varaible = new data-type;

4. Example:
	int *ptr = new int;

	- Datatype is int
		only 4 bytes will be allocated.
	
	- Heap memory
	
	- *ptr = 10
	
5. Example:
	float *fptr = new float;
	*fptr = 20.34;

6. Allocation of Memory + Initialization of memory can be done in single line.
	ptr = new data-type(value);
	

7. Example:
	1. float *fptr = new float;
	2. *fptr = 20.34;

	float *fptr = new float(20.34);

8. Allocating an array
	int *p = malloc(4 * sizeof(int));

	int *p = new int[4];
	4 -> No. of blocks

9. 2D array
	ptr = new int[3][4]; // Legal
	ptr = new int[m][4]; // Legal
	ptr = new int[m][]; // Illegal
	ptr = new int[][4]; // legal
	
	//First dim can be ommited, but remaining dim must be a constant.
	ptr = new int[][m]; //X

10. Class:
	
	class Sample
	{
		//Body
	};

	int main()
	{
		Sample *p = new Sample;
	}

11. delete ---> free the allocated memory.
	delete ptr;
	Example:

	delete p;
	delete q;
	
12. To free an array
	delete [size] ptr;

	OR

	delete []ptr;





































	
	


















	
	





































































	





















































