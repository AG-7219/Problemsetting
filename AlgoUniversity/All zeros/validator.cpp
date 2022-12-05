#include<bits/stdc++.h>
#include "testlib.h"
using ll = long long;
const ll MAXT = 10'000;
const ll MAXN = 100'000;
const ll MAXM = 1'000'000'000'000'000'000;
const ll MAXV = 10'000'000'000'000;

signed main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    ll t = inf.readInt(1,MAXT,"t");
    inf.readEoln();
    ll sum = 0;
    for(ll testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        ll n = inf.readInt(1,MAXN,"n");
        inf.readSpace();
        ll m = inf.readLong(0,MAXM,"m");
        inf.readEoln();
        sum += n;
        for(ll i=0; i<n; i++)
        {
            inf.readLong(0,MAXV,"a_i");
            if(i == n-1) inf.readEoln();
            else inf.readSpace();
        }
    }
    ensuref(sum <= MAXN, "sum of n over all testcases should not exceed 1e5");
    inf.readEof();
    return 0;
}