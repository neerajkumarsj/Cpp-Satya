/*
	Rules of Virtual Functions
	==========================
	!. When a virtual function in the base class is present, then the definition is a must.
	2. When a pure virtual function in the base class is present, then the definition is not a must.
	3. Virtual functions cannot be static.
		- 
	
	4. They can be friend function to another class.
	5. Virtual functions are accessed using object pointers.
	6. 
		class Base
		{
		};

		class Derived: public Base
		{
		};

		int main()
		{
			Base *bptr;
			Derived D;

			bptr = &D; --> Compatible
			Derived *dptr = new Base; --> Incompatible
		}
	7. The Class cannot have virtual constructors, but can contain virtual destructors.
	     Virtual Operator Overloading is also possible.
	8. Advantages:
	   # Virtual functions supports Runtime Polymorphism.
	9. Virtual Functions should be declared only in public.
*/
	
