#ifndef Change_H
#define Change_H

#include "../notImplemented.h"

#include <string>

using namespace std;

template <typename Tchange>

class Change
{

public:
    Tchange change;

    // constructor
    Change();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif