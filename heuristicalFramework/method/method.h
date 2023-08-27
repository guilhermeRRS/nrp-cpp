#ifndef Method_H
#define Method_H

#include <vector>

using namespace std;

template <typename Tsol, typename Tchange, typename Tm>

class Method
{

public:
    vector<MoveGen<Tsol, Tchange> *> sols;
    Data *data;
    Model<Tm> *model;

    Problem() { NotImplemented(); }

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};

#endif