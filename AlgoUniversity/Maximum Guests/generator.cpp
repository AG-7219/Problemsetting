#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    println(t);

    vector n_list = rnd.partition(t,sum_n,1);

    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = n_list[testcase];
        println(n);
        for(int i=0; i<n; i++) println(rnd.next(0,n-1), rnd.next(0,n-1));
    }

    return 0;
}