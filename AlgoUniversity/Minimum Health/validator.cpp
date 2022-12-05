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
    int sum_n = 0, sum_m = 0;
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = inf.readInt(1,MAXN,"n");
        inf.readSpace();
        int m = inf.readInt(1,MAXN,"m");
        inf.readSpace();
        int k = inf.readInt(1,n,"k");
        inf.readEoln();
        sum_n += n;
        sum_m += m;
        for(int i=0; i<n; i++)
        {
            inf.readInt(1,MAXV,"a_i");
            if(i == n-1) inf.readEoln();
            else inf.readSpace();
        }
        for(int i=0; i<m; i++)
        {
            inf.readInt(1,MAXV,"b_i");
            if(i == m-1) inf.readEoln();
            else inf.readSpace();
        }
    }
    ensuref(sum_n <= MAXN, ("sum of n over all testcases should not exceed " + to_string(MAXN)).c_str());
    ensuref(sum_m <= MAXN, ("sum of m over all testcases should not exceed " + to_string(MAXN)).c_str());
    inf.readEof();
    return 0;
}
