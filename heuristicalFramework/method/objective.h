#ifndef Objective_H
#define Objective_H

#include "../notImplemented.h"

#include <string>
#include <vector>

using namespace std;

template <typename Tsol, typename Tchange>

class Objective
{

public:
    Solution<Tsol> *sol;
    Data *data;
    vector<Change<Tchange>> changes;
    int objective;

    // constructor
    Objective();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif