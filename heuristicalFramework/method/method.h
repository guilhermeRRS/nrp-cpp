#ifndef Method_H
#define Method_H

#include <string>
#include <vector>

using namespace std;

template <typename Tsol, typename Tchange, typename Tm>

class Method
{

public:
    vector<MoveGen<Tsol, Tchange> *> sols;
    Data *data;
    Model<Tm> *model;

    // constructor
    Method();

    // debug functions
    virtual void debugCmd() { NotImplemented(); };
    virtual string debugStr() { NotImplemented(); };

    // documentation functions
    virtual void docCmd() { NotImplemented(); };
    virtual string docStr() { NotImplemented(); };
};

#endif