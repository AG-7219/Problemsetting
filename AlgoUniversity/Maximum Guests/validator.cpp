#include<bits/stdc++.h>
#include "testlib.h"

const int MAXN = 100'000;
const int MAXT = 10'000;

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
        inf.readEoln();
        sum += n;
        for(int i=0; i<n; i++)
        {
            inf.readInt(0,n-1,"a_i");
            inf.readSpace();
            inf.readInt(0,n-1,"b_i");
            inf.readEoln();
        }
    }
    ensuref(sum <= MAXN, "sum of n over all testcases should be bounded");
    inf.readEof();
    return 0;
}