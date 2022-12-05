#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;

const int MAXN = 100'000;
const int MAXT = 10'000;
const int MAXV = 1'000'000'000;

int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    int t = inf.readInt(1,MAXT,"t");
    inf.readEoln();
    int sum = 0;
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = inf.readInt(1,MAXN,"n");
        inf.readSpace();
        int m = inf.readInt(1,MAXN,"m");
        inf.readEoln();
        vector<bool> present(m,false);
        sum += n*m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int x = inf.readInt(-1,MAXV,"x_ij");
                if(x != -1) present[j] = true;
                if(j==m-1) inf.readEoln();
                else inf.readSpace();
            }
        }        
        ensuref(all_of(begin(present),end(present), [&](const bool& value) { return value; }), "There are all -1 in some column");
    }
    ensuref(sum <= 10*MAXN, "sum of nxm over all testcases should be bounded");
    inf.readEof();
    return 0;
}