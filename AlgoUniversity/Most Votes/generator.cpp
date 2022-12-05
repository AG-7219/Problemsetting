#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    int mn = atoi(argv[3]);
    int mx = atoi(argv[4]);
    vector n_list = rnd.partition(t,sum_n,1);

    println(t);
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = n_list[testcase], k = rnd.next(1,n);
        println(n,k);
        for(int i=0; i<n; i++) cout<<rnd.next(mn,mx)<<" \n"[i==n-1];
    }

    return 0;
}