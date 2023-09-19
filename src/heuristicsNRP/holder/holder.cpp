#include "../../include/heuristicsNRP/holder/holder.h"

/*
            constructor
*/
template <typename Tsol, typename Tchange, typename Tm>
HolderNRP<Tsol, Tchange, Tm>::HolderNRP()
{
    cout << "Creating" << endl;
};

/*
            debug functions
*/
template <typename Tsol, typename Tchange, typename Tm>
void HolderNRP<Tsol, Tchange, Tm>::debugCmd()
{
    cout << "debugCmd" << endl;
};
template <typename Tsol, typename Tchange, typename Tm>
string HolderNRP<Tsol, Tchange, Tm>::debugStr()
{
    return "debugStr";
};

/*
            documentation functions
*/
template <typename Tsol, typename Tchange, typename Tm>
void HolderNRP<Tsol, Tchange, Tm>::docCmd()
{
    cout << "docCmd" << endl;
};
template <typename Tsol, typename Tchange, typename Tm>
string HolderNRP<Tsol, Tchange, Tm>::docStr()
{
    return "docStr";
};