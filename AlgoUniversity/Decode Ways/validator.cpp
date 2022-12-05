#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;
const int MAXT = 10'000;
const int MAXN = 100'000;
int main(int argc,char* argv[])
{
    registerValidation(argc,argv);
    int t = inf.readInt(1,MAXT,"t");
    inf.readEoln();
    int sum = 0;
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        string s = inf.readToken("[0-9]{1,"+to_string(MAXN)+"}","s_i");
        inf.readEoln();
        sum += s.length();
    }
    ensuref(sum <= MAXN, "sum of |s| over all testcases should not exceed 1e5");
    inf.readEof();
    return 0;
}