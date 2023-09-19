// #include <mpi.h>
// #include <gurobi_c++.h>
#include "../include/heuristicsNRP/heuristicsNRP.h"

using namespace std;

int main(int argc, char **argv)
{
  HolderNRP holder = HolderNRP<void, void, void>();
  holder.debugCmd();
  return 0;
}