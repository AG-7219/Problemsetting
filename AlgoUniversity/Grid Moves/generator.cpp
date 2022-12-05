#include<bits/stdc++.h>
#include "./../../testlib.h"

using namespace std;
using ll = long long;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoll(argv[1]);
    ll mn = atoll(argv[2]);
    ll mx = atoll(argv[3]);

    println(t);
    for(int i=0; i<t; i++)
    {
        setTestCase(i+1);
        println(rnd.next(mn,mx),rnd.next(mn,mx));
    }
    return 0;
}