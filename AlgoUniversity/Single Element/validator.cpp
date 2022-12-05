#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;

const int MAXT = 10'000;
const int MAXN = 200'000;
const int MAXX = 1000'000'000;
const int MINX = -1000'000'000;

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
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int x = inf.readInt(MINX,MAXN);
            if(i==n-1) inf.readEoln();
            else inf.readSpace();
            a.push_back(x);
        }
        int count = 0;
        for(int i=0; i<a.size(); )
        {
            if(i+1 >= a.size() or a[i+1]!=a[i]) count++, i++;
            else i+=2;
        }
        ensuref(count==1,"There should be exactly one position");
    }
    ensuref(sum <= MAXN, "sum of n over all testcases should not exceed 2e5");
    inf.readEof();
    return 0;    
}