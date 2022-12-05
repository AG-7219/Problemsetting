#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;
const int MAXN = 100'000;
const int MAXV = 1'000'000'000;
int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    int n = inf.readInt(1,MAXN,"n");
    inf.readSpace();
    int q = inf.readInt(1,MAXN,"q");
    inf.readEoln();
    for(int i=0; i<n; i++)
    {
        int x = inf.readInt(1,MAXV,"a_i");
        if(i==n-1) inf.readEoln();
        else inf.readSpace();
    }
    while(q--)
    {
        int l = inf.readInt(1,n,"l");
        inf.readSpace();
        int r = inf.readInt(l,n,"r");
        inf.readSpace();
        int x = inf.readInt(1,MAXV,"x");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}