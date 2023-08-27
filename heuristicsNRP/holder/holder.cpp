#include "../../heuristicalFramework/heuristicalFramework.h"
#include <iostream>
#include <vector>

using namespace std;

// class HolderNRP : public Holder<Tsol, Tchange, Tm>
class HolderNRP : public Holder<void, void, void>
{

public:
    // constructor
    HolderNRP() { cout << "Alive" << endl; };

    // debug functions
    void debugCmd()
    {
        cout << "Me" << endl;
    }
    string debugStr()
    {
        return "Me";
    }

    // documentation functions
    void docCmd()
    {
        cout << "Me" << endl;
    }
    string docStr()
    {
        return "Me";
    }
};