#include <bits/stdc++.h>
#include "testlib.h"
using ll = long long;
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    ll t = atoi(argv[1]);
    ll n = atoi(argv[2]);
    ll min_a = atoi(argv[3]);
    ll max_a = atoi(argv[4]);

    //creates a random distribution of n over t testcases
    vector<ll> n_list = rnd.partition(t, n, 1LL);

    println(t);
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        ll n = n_list[testcase];
        ll k = rnd.next(1LL,n);
        println(n,k);
        for(int i=0; i<n; i++) cout<<rnd.next(min_a,max_a)<<" \n"[i==n-1];
    }

    return 0;
}