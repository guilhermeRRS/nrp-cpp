#ifndef Holder_H
#define Holder_H

#include <vector>

using namespace std;

template <typename Tsol, typename Tchange, typename Tm>

class Holder
{

public:
    vector<Method *<Tsol, Tchange, Tm>> methods;
    Problem<Tsol, Tm> *problem;

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};

#endif