#include <stdexcept>
using namespace std;

class NotImplemented : public logic_error
{
public:
    NotImplemented();
};