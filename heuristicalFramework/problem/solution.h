#ifndef Solution_H
#define Solution_H

#include "../notImplemented.h"

#include <string>

using namespace std;

template <typename Tsol>

class Solution
{

public:
    Tsol sol;

    bool empty;
    bool valid;

    int obj;
    int errorStats;

    // constructor
    Solution();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif