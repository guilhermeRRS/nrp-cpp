#ifndef Change_H
#define Change_H

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
    virtual void debugCmd() { NotImplemented(); };
    virtual string debugStr() { NotImplemented(); };

    // documentation functions
    virtual void docCmd() { NotImplemented(); };
    virtual string docStr() { NotImplemented(); };
};

#endif