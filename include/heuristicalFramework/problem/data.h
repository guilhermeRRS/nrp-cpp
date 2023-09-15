#ifndef Data_H
#define Data_H

#include "../notImplemented.h"

#include <string>

using namespace std;

class Data
{

public:
    bool empty;
    bool valid;

    // constructor
    Data();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif