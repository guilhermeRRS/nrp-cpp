#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../utils/indexOfVector.cpp"
#include "../utils/printsVector.cpp"

using namespace std;

typedef struct Data_Instance_Set
{

    int D;
    int W;
    int I;
    vector<string> Inames;
    int T;
    vector<string> Tnames;
    vector<vector<int>> Rt;
    vector<vector<int>> Rtmatrix;
    vector<vector<string>> Rtinput;
    vector<vector<int>> Ni;
    Data_Instance_Set(int D, vector<string> Iinput, vector<string> Tnames, vector<vector<string>> Rtinput, vector<vector<int>> Niinput) : D(D), Inames(Iinput), Tnames(Tnames), Rtinput(Rtinput), Ni(Niinput)
    {
        int i, j, k;

        I = Rt.size();
        T = Tnames.size();

        W = (int)D / 7;

        // setting Rts
        vector<int> optionsByShift;
        vector<int> row;

        int last;
        for (i = 0; i < T; i++)
        {
            optionsByShift = {};
            row = vector<int>(T, 0);
            for (j = 0; j < Rtinput[i].size(); j++)
            {
                optionsByShift.push_back(indexOfVector(Tnames, Rtinput[i][j]));
                row[optionsByShift.back()] = 1;
            }
            Rt.push_back(optionsByShift);
            Rtmatrix.push_back(row);
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const Data_Instance_Set &set)
    {
        os << "=== Data instance Sets === object ===" << endl;
        os << "I: " << set.I << endl;
        os << printVector(set.Inames) << endl;
        os << "D: " << set.D << endl;
        os << "W: " << set.W << endl;
        os << "T: " << set.T << endl;
        os << printVector(set.Tnames) << endl;
        /*os << "Rt: (recieved)" << endl;
        os << printVectorOfVectors(set.Rtinput) << endl;
        os << "Rt: (numberfied)" << endl;
        os << printVectorOfVectors(set.Rt) << endl;*/
        os << "Rt: (matrix)" << endl;
        os << printVectorOfVectors(set.Rtmatrix) << endl;
        return os;
    }

} Data_Instance_Set;

typedef struct Data_Instance_Parameter
{

    vector<int> lt;
    vector<vector<int>> mmax;
    vector<int> bmin;
    vector<int> bmax;
    vector<int> cmin;
    vector<int> cmax;
    vector<int> omin;
    vector<int> amax;
    vector<vector<vector<int>>> q;
    vector<vector<vector<int>>> p;
    vector<vector<int>> wmin;
    vector<vector<int>> wmax;
    Data_Instance_Parameter(vector<int> lt, vector<vector<int>> mmax, vector<int> bmin, vector<int> bmax, vector<int> cmin, vector<int> cmax, vector<int> omin, vector<int> amax, vector<vector<vector<int>>> q, vector<vector<vector<int>>> p, vector<vector<int>> wmin, vector<vector<int>> wmax) : lt(lt), mmax(mmax), bmin(bmin), bmax(bmax), cmin(cmin), cmax(cmax), omin(omin), amax(amax), q(q), p(p), wmin(wmin), wmax(wmax) {}

    friend std::ostream &operator<<(std::ostream &os, const Data_Instance_Parameter &parameters)
    {
        os << "=== Data instance Parameters === object ===" << endl;
        os << "lt: " << printVector(parameters.lt) << endl;
        os << "mmax: " << endl;
        os << printVectorOfVectors(parameters.mmax) << endl;
        os << "bmin: " << printVector(parameters.bmin) << endl;
        os << "bmax: " << printVector(parameters.bmax) << endl;
        os << "cmin: " << printVector(parameters.cmin) << endl;
        os << "cmax: " << printVector(parameters.cmax) << endl;
        os << "omin: " << printVector(parameters.omin) << endl;
        os << "amax: " << printVector(parameters.amax) << endl;
        // TODO: print vector of vector of vectors
        os << "wmin: " << endl;
        os << printVectorOfVectors(parameters.wmin) << endl;
        os << "wmax: " << endl;
        os << printVectorOfVectors(parameters.wmax) << endl;
        return os;
    }

} Data_Instance_Parameter;

typedef struct Data_Instance
{

    Data_Instance_Set sets;
    Data_Instance_Parameter parameters;

    Data_Instance(int D, vector<string> Iinput, vector<string> Tnames, vector<vector<string>> Rtinput, vector<vector<int>> Niinput, vector<int> lt, vector<vector<int>> mmax, vector<int> bmin, vector<int> bmax, vector<int> cmin, vector<int> cmax, vector<int> omin, vector<int> amax, vector<vector<vector<int>>> q, vector<vector<vector<int>>> p, vector<vector<int>> wmin, vector<vector<int>> wmax) : sets(Data_Instance_Set(D, Iinput, Tnames, Rtinput, Niinput)), parameters(Data_Instance_Parameter(lt, mmax, bmin, bmax, cmin, cmax, omin, amax, q, p, wmin, wmax)){};

    friend std::ostream &operator<<(std::ostream &os, const Data_Instance &data)
    {
        os << "=== Data instance === object ===" << endl;
        os << data.sets << endl;
        os << data.parameters << endl;
        return os;
    }

} Data_Instance;