#ifndef MoveGen_H
#define MoveGen_H

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

    MoveGen();

    virtual bool generate();

    // the explanation functions
    virtual void printCmd();
    virtual void explainCmd();
};

#endif