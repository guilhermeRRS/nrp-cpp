#ifndef Problem_H
#define Problem_H

#include "../notImplemented.h"

#include "solution.h"
#include "data.h"
#include "model.h"

#include <string>
#include <vector>

using namespace std;

template <typename Tsol, typename Tm>

class Problem
{

public:
    vector<Solution<Tsol> *> sols;
    Data *data;
    Model<Tm> *model;

    // constructor
    Problem();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif