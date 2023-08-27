#ifndef Holder_H
#define Holder_H

#include <string>
#include <vector>

using namespace std;

template <typename Tsol, typename Tchange, typename Tm>

class Holder
{

public:
    vector<Method *<Tsol, Tchange, Tm>> methods;
    Problem<Tsol, Tm> *problem;

    // constructor
    Holder();

    // debug functions
    virtual void debugCmd() { NotImplemented(); };
    virtual string debugStr() { NotImplemented(); };

    // documentation functions
    virtual void docCmd() { NotImplemented(); };
    virtual string docStr() { NotImplemented(); };
};

#endif