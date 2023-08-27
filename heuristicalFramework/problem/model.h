#ifndef Model_H
#define Model_H

#include "../notImplemented.h"

#include <string>

using namespace std;

template <typename Tm>

class Model
{

public:
    Tm m;

    bool empty;

    // constructor
    Model();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif