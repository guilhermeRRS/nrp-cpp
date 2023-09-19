#ifndef HolderNRP_H
#define HolderNRP_H

#include "../../heuristicalFramework/heuristicalFramework.h"
#include <iostream>
#include <vector>

using namespace std;

template <typename Tsol, typename Tchange, typename Tm>

class HolderNRP : public Holder<Tsol, Tchange, Tm>
{

public:
    vector<Method<Tsol, Tchange, Tm> *> methods;
    Problem<Tsol, Tm> *problem;

    // constructor
    HolderNRP();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif