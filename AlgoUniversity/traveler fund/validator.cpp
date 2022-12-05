#include<bits/stdc++.h>
#include "./../../testlib.h"

const int MAXT = 10'000;
const int MAXN = 100'000;
const int MAXX = 1000'000'000;
const int MINX = -1000'000'000;


using namespace std;
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
        for(int i=0; i<n; i++)
        {
            int x = inf.readInt(MINX,MAXX,"a_i");
            if(i==n-1) inf.readEoln();
            else inf.readSpace();
        }
    }
    inf.readEof();
    return 0;    
}