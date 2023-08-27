#ifndef MoveGen_H
#define MoveGen_H

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

    // essential functions
    virtual bool generate();

    // debug functions
    virtual void debugCmd() { NotImplemented(); };
    virtual string debugStr() { NotImplemented(); };

    // documentation functions
    virtual void docCmd() { NotImplemented(); };
    virtual string docStr() { NotImplemented(); };
};

#endif