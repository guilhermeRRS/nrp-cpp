#ifndef Model_H
#define Model_H

using namespace std;

template <typename Tm>

class Model
{

public:
    Tm m;

    bool empty;

    Model() { NotImplemented(); }

    virtual void getModel() { NotImplemented(); };

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};

#endif