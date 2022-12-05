#include<bits/stdc++.h>
#include "testlib.h"

const int MAXT = 10'000;
const int MAXN = 100'000;
using namespace std;

int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    int t = inf.readInt(1,MAXT,"t");
    inf.readEoln();
    int sum_n{0}, sum_m{0};
    for(int i=0; i<t; i++)  
    {
        setTestCase(i+1);
        int n = inf.readInt(1,MAXN,"n");
        inf.readSpace();
        int m = inf.readInt(1,MAXN,"m");
        inf.readEoln();
        sum_n += n;
        sum_m += m;
        inf.readToken("[a-z]{"+to_string(n)+"}");
        inf.readEoln();
        inf.readToken("[a-z]{"+to_string(m)+"}");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}