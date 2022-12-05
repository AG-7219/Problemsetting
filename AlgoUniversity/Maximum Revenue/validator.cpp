#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;
using ll = long long;
const ll MAXN = 100'000;
const ll MAXT = 10'000;
const ll MAXV = 1'000'000'000;

int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    int t = inf.readInt(1LL,MAXT,"t");
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
            ll l = inf.readLong(1,MAXV,"l_i");
            inf.readSpace();
            ll r = inf.readLong(l,MAXV,"r_i");
            inf.readSpace();
            ll x = inf.readLong(1,MAXV,"x_i");
            inf.readEoln();
        }
    }
    ensuref(sum <= MAXN, "sum of n over all testcases should not exceed 1e5");
    inf.readEof();
    return 0;
}