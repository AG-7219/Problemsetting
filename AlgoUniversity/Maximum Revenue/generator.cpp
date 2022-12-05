#include<bits/stdc++.h>
#include "testlib.h"

using ll = long long;
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    ll mn = atoll(argv[3]);
    ll mx = atoll(argv[4]);
    println(t);

    vector n_list = rnd.partition(t,sum_n,1);

    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        println(n_list[testcase]);
        for(int i=0; i<n_list[testcase]; i++)
        {
            ll l = rnd.next(mn,mx);
            ll r = rnd.next(l,mx);
            ll x = rnd.next(mn,mx);
            println(l,r,x);
        }
    }

    return 0;
}