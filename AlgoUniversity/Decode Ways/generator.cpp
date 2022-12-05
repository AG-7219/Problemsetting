#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    vector n_list = rnd.partition(t,sum_n,1);
    println(t);
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        println(rnd.next("[0-9]{"+to_string(n_list[testcase])+"}"));
    }
    return 0;
}