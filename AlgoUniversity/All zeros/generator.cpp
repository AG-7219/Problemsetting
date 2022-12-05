#include<bits/stdc++.h>
#include "testlib.h"
using ll = long long;
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    ll t = atoll(argv[1]);
    ll sum_n = atoll(argv[2]);
    ll mn_m = atoll(argv[3]);
    ll mx_m = atoll(argv[4]);
    ll mn_x = atoll(argv[5]);
    ll mx_x = atoll(argv[6]);
    println(t);

    vector n_list = rnd.partition(t,sum_n,1LL);

    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        println(n_list[testcase],rnd.next(mn_m,mx_m));
        for(int i=0; i<n_list[testcase]; i++) cout<<rnd.next(mn_x,mx_x)<<" \n"[i==n_list[testcase]-1];
    }

    return 0;
}