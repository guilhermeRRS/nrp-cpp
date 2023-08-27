#ifndef Objective_H
#define Objective_H

#include "../move/change.h"

using namespace std;

template <typename Tsol, typename Tchange>

class Objective
{

public:
    Solution<Tsol> *sol;
    Data *data;
    vector<Change<Tchange>> changes;
    int objective;

    Objective() { NotImplemented(); }

    virtual int calculate() { NotImplemented(); };

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};

#endif