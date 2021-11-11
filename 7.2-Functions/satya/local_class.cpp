#include <iostream>
using namespace std;

void sample(void)
{
	class Add
	{
		private:
			int a, b;
			int result;
		public:
			void get_data(int x, int y)
			{
				a = x;
				b = y;
			}

			void add(void)
			{
				result = a + b;
				cout << "Result: " << result << endl;
			}
	};

	Add A;
	A.get_data(10, 20);
	A.add();
}

int main()
{
	sample();
	Add B;
}



