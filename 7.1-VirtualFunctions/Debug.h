#include <iostream>
using namespace std;

class Debug
{
    public:
        virtual void dump()
        {   
            cout << "Debugabble error: No dump defined for this class " << endl;
        }
};
