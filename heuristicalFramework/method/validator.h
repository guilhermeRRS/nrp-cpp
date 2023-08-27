#ifndef Validator_H
#define Validator_H

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

    virtual bool validate() { NotImplemented(); };

    // debug functions
    virtual void debugCmd() { NotImplemented(); };
    virtual string debugStr() { NotImplemented(); };

    // documentation functions
    virtual void docCmd() { NotImplemented(); };
    virtual string docStr() { NotImplemented(); };
};

#endif