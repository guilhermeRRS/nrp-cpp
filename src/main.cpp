// #include <mpi.h>
// #include <gurobi_c++.h>
#include "./heuristicsNRP/heuristicsNRP.h"

using namespace std;

int main(int argc, char **argv)
{
  HolderNRP holder = HolderNRP();
  holder.debugCmd();
  return 0;
}