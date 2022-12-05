#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;
const int N = 100'000;

int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    
    int t = inf.readInt(1,10'000,"t");
    inf.readEoln();

    int sum = 0;
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = inf.readInt(1,N,"n");
        inf.readEoln();
        sum += n;

        inf.readToken("[a-zA-Z_]{"+to_string(n)+"}","s");
        inf.readEoln();
    }
    inf.readEof();

    ensuref(sum <= N, "sum of lengths of strings can not exceed 1e5");
    return 0;
}