#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
int indexOfVector(vector<T> input, T target)
{
    return distance(input.begin(), find(input.begin(), input.end(), target));
};