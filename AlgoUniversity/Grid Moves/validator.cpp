#include<bits/stdc++.h>
#include "./../../testlib.h"

using namespace std;
using ll = long long;
const ll MX = 1'000'000'000'000'000'000LL;

int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    int t = inf.readInt(1,100'000,"t");
    inf.readEoln();

    for(int i=0; i<t; i++)
    {
        setTestCase(i+1);
        ll n = inf.readLong(1LL,MX,"n");
        inf.readSpace();
        ll m = inf.readLong(1LL,MX,"m");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}