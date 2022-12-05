#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;
const int MAXT = 1e4;
const int MAXS = 1e5;
int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    int t = inf.readInt(1,MAXT,"t");
    inf.readEoln();
    int sum = 0;
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        sum += inf.readInt(1,MAXS,"s_i");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}