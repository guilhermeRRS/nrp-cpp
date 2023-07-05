#include <string>
#include <vector>

using namespace std;

template <typename T>
string printVector(const vector<T> &input)
{
    string output = "";

    bool first = true;
    for (const T &element : input)
    {
        if (!first)
        {
            output += " ";
        }
        if constexpr (is_same_v<T, int>)
        {
            output += to_string(element);
        }
        else
        {
            output += element;
        }
        first = false;
    }

    return output;
};

template <typename T>
string printVectorOfVectors(const vector<vector<T>> &input)
{
    string output = "";

    bool firstLine = true;
    bool firsElem;
    for (const vector<T> &line : input)
    {
        if (!firstLine)
        {
            output += "\n";
        }

        firsElem = true;
        for (const T &elem : line)
        {
            if (!firsElem)
            {
                output += " ";
            }
            if constexpr (is_same_v<T, int>)
            {
                output += to_string(elem);
            }
            else
            {
                output += elem;
            }
            firsElem = false;
        }
        firstLine = false;
    }

    return output;
};