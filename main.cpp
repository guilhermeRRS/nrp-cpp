#include <iostream>
#include <vector>
#include "contracts/data_instance.cpp"
#include "read/get_data.cpp"

using namespace std;

int main()
{
    get_data();
    Data_Instance file = Data_Instance(28, {"A", "B", "C"}, {"X", "Y", "Z"}, {{"X"}, {}, {"Y", "Z"}}, {{1, 2}}, {1, 2, 3}, {{5, 6}}, {7, 6}, {8, 9}, {34}, {8, 9}, {0, 3}, {4, 9}, {{{1, 2}, {34}}, {{1}}}, {{{2}, {3, 4}}, {{}}, {{2}, {1, 4}}}, {{1, 2}}, {{1, 2}, {3, 4}});
    cout << file;
    return 0;
}