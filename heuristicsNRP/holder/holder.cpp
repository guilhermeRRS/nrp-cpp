#include "../../heuristicalFramework/heuristicalFramework.h"
#include <iostream>
#include <vector>

using namespace std;

// class HolderNRP : public Holder<Tsol, Tchange, Tm>
class HolderNRP : public Holder<void, void, void>
{

public:
    HolderNRP() {}

    void printCmd()
    {
        cout << "Holder class has not a written print";
    }

    void explainCmd()
    {
        cout << "Holder class for NRP. It is able to dispath its process for different models";
    }
};