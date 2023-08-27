#ifndef NotImplemented_H
#define NotImplemented_H

#include <stdexcept>

using namespace std;

class NotImplemented : public logic_error
{
public:
    NotImplemented();
};

#endif