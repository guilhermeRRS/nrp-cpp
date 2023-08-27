#ifndef Validator_H
#define Validator_H

#include "../notImplemented.h"

#include <string>
#include <vector>

using namespace std;

template <typename Tsol, typename Tchange>

class Validator
{

public:
    Solution<Tsol> *sol;
    Data *data;
    vector<Change<Tchange>> changes;
    bool valid;

    // constructor
    Validator();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif