#ifndef Method_H
#define Method_H

#include "../notImplemented.h"

#include "../move/moveGen.h"
#include "../problem/data.h"
#include "../problem/model.h"

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
    virtual void debugCmd();
    virtual string debugStr();

    // documentation functions
    virtual void docCmd();
    virtual string docStr();
};

#endif