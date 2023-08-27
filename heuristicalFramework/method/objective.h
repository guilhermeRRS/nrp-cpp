#ifndef Objective_H
#define Objective_H

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
    virtual void debugCmd() { NotImplemented(); };
    virtual string debugStr() { NotImplemented(); };

    // documentation functions
    virtual void docCmd() { NotImplemented(); };
    virtual string docStr() { NotImplemented(); };
};

#endif