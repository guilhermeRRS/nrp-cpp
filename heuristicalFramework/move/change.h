#ifndef Change_H
#define Change_H

using namespace std;

template <typename Tchange>

class Change
{

public:
    Tchange change;

    Change() { NotImplemented(); }

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
    virtual string explainStr() { NotImplemented(); };
};

#endif