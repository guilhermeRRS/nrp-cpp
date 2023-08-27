#ifndef Data_H
#define Data_H

using namespace std;

class Data
{

public:
    bool empty;
    bool valid;

    Data() { NotImplemented(); }

    virtual void getData() { NotImplemented(); };

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};

#endif