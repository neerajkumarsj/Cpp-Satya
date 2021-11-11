/*
	Implementation of Maps Without the usage of STL Libraries

*/
#include <iostream>
using namespace std;

template <class K,class V>
class Maps
{
	K key;
	V value;
	public:
		Maps(K val1, V val2)
		{
			key = val1;
			value = val2;
			cout << "Successfully Created: {" << key << " : " << value << "}" << endl;
		}

		V getKey()
		{
			return value;
		}

		K getValue()
		{
			return key;
		}
};


int main()
{
	Maps <int, int> M(5, 3);
}
