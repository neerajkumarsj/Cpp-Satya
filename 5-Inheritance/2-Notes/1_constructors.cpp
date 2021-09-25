Topic: Constructors in Derived Classes
--------------------------------------
1. 
class Base
{
	private:
	:
	public:
		Base();
};

class Derived: public Base
{
	//The derived class need not have a constructor.
};

2. 
class Base
{
	private:
	:
	public:
		Base(int a, int b);
};

class Derived: public Base
{
	//The derived class must have a constructor.
	public:
		Derived(int a, int b)
};

Derived D(10, 20);

3. If constructor is present in both Base as well as Derived class,
	then, The constructor in the Base class will be executed first.

4. Multiple Inheritance
	B1		B2		B3	
			D
	
	class D: public B2, public B1, public B3
			
5. Multilevel Inheritance
	A
	|
	B
	|
	C
	Th constructors will be executed in the order of inheritance.

6. General Form

	Derived-Constructor(Arg1, Arg2, Arg3, ..., ArgN, Arg(D))
	Base1(Arg1),
	Base2(Arg2),
	:
	:
	BaseN(ArgN),
	{
		Body of the derived constructor
	}
	
7. Virtual Base class -> Constructor
	class D: public B, public virtual C
	{

	};

	1. Virtual 
	2. Base
	3. Derived

8. Summary:
	class D: public B
	1. B
	2. D

	class D: public A, public B
	1. A
	2. B
	3. D

9. 
	class B
	{
		public:
			B(int a, int b);
			:
	};

	class D: public B
	{
		private:
			int m;
		public:
			D(int x, int y, int z)
			B(x, y),
			{
				m = z;
			}
	}







































































