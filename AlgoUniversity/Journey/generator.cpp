#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    int min_x = atoi(argv[3]);
    int max_x = atoi(argv[4]);
    vector n_list = rnd.partition(t,sum_n,1);

    println(t);
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = n_list[testcase];
        int s = rnd.next(min_x,max_x);
        println(n,s);
        for(int i=0; i<n; i++) cout<<rnd.next(min_x,max_x)<<" \n"[i==n-1];
    }
    return 0;
}