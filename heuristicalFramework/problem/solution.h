#ifndef Solution_H
#define Solution_H

using namespace std;

template <typename Tsol>

class Solution
{

public:
    Tsol sol;

    bool empty;
    bool valid;

    int obj;
    int errorStats;

    Solution() { NotImplemented(); }

    virtual void getSolution() { NotImplemented(); };

    // the explanation functions
    virtual void printCmd() { NotImplemented(); };
    virtual void explainCmd() { NotImplemented(); };
};

#endif