Operator Overloading
===================


1. Overloading Unary -
	1. Member Function
	2. Friend Fucntion

2. Overloading Binary +
	1. Member Function
	2. Friend Fucntion

3. Why friend function is needed, if both member function and friend function does the same job?
    - Overloading * 
    - Overloading >>
    - Overloading <<

4. Mathematical operations on Strings
    - Overloading +
    - Overloading <=

5. Overloading []
	//Postponned till POINTERS
	- Overloading pointer to member ->

6. Nameless Temporary Objects
	- Overloading ++ / --
 	   	- Limitations of ++ / -- operations
7. Overloading new and delete operator
8. Rules to overload the operators
	1. Only exisiting operators can be overloaded
	2. Overloaded operator must have atleast one operand of user-defined type
	3. It has to follow the syntax of orginal operators
		- A + B => Possible
		- +AB   => Not Possible

	4. We cannot use friend function to overload certain operators
		- Examples,
			1. =   Assignment Operator
			2. ()  function call Operator
			3. []  Subscript Operator
			4. ->  Member Access using Pointer

9. Why some operators cannot be overloaded + why?

	1. Ternary Operator (?:)
		- C++ Does'nt support Ternanry Operator Overlaoding
	2. sizeof Operator
		- Sincce it is a Compile Time Operator

	3. scope resolution operator (::)
		- Class_name::function_name/variable_name
		- Since object is not involced with "::" hence it is not used
	4. '. ' operator
		- A.display()
			- Since '.' operator is a access specifier, 2nd argument cannot be an object
