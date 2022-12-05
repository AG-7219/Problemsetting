#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_s = atoi(argv[2]);
    int mn = atoi(argv[3]);
    int mx = atoi(argv[4]);
    vector s_list = rnd.partition(t,sum_s);
    println(t);
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        println(rnd.next(mn,mx));
    }
    return 0;
}