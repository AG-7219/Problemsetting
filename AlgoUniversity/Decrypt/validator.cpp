#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;
const int MAXT = 10'000;
const int MAXN = 100'000;

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
            inf.readToken("[A-J0-9]{1-10}","A_i");
            if(i==n-1) inf.readEoln();
            else inf.readSpace();
        }
    }
    inf.readEof();
    ensuref(sum <= MAXN, "sum of n over all testcases should not exceed 1e5");
    return 0;
}