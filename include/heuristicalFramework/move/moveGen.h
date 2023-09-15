#ifndef MoveGen_H
#define MoveGen_H

#include "../notImplemented.h"

#include "../problem/solution.h"
#include "../problem/data.h"
#include "../move/change.h"

#include <string>
#include <vector>

using namespace std;

template <typename Tsol, typename Tchange>

class MoveGen
{

public:
    Solution<Tsol> *sol;
    Data *data;
    vector<Change<Tchange>> changes;
    bool successGenerating;

    // constructor
    MoveGen();

    // debug functions
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif