#ifndef Validator_H
#define Validator_H

#include "../move/change.h"

using namespace std;

template <typename Tsol, typename Tchange>

class Validator
{

public:
    Solution<Tsol> *sol;
    Data *data;
    vector<Change<Tchange>> changes;
    bool valid;

    Validator() { NotImplemented(); }

    virtual bool validate() { NotImplemented(); };

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};

#endif