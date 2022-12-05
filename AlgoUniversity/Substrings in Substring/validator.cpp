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
    int sum_n = 0, sum_q = 0;
    for(int i=0; i<t; i++)
    {
        setTestCase(i+1);
        int n = inf.readInt(1,MAXN,"n");
        inf.readSpace();
        int q = inf.readInt(1,MAXN,"q");
        inf.readEoln();
        sum_n += n;
        sum_q += q;
        inf.readToken("[a-z]{"+to_string(n)+"}");
        inf.readEoln();
        while(q--)
        {
            int l = inf.readInt(1,n);
            inf.readSpace();
            int r = inf.readInt(l,n);
            inf.readEoln();
        }
    }
    inf.readEof();

    ensuref(sum_n<=MAXN and sum_q<=MAXN, ("sum of n and q over all testcases should not exceed "+to_string(MAXN)).c_str());
    return 0;
}