#ifndef Holder_H
#define Holder_H

#include "../notImplemented.h"

#include "../method/method.h"
#include "../problem/problem.h"

#include <string>
#include <vector>

using namespace std;

template <typename Tsol, typename Tchange, typename Tm>

class Holder
{

public:
    vector<Method<Tsol, Tchange, Tm> *> methods;
    Problem<Tsol, Tm> *problem;

    // constructor
    Holder();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif