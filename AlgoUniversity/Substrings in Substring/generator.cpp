#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    int sum_q= atoi(argv[3]);
    vector n_list = rnd.partition(t,sum_n,1);
    vector q_list = rnd.partition(t,sum_q,1);
    println(t);
    for(int i=0; i<t; i++)
    {
        setTestCase(i+1);
        int n = n_list[i], q = q_list[i];
        println(n,q);
        println(rnd.next("[a-z]{"+to_string(n)+"}"));
        while(q--)
        {
            int l = rnd.next(1,n);
            int r = rnd.next(l,n);
            println(l,r);
        }
    }
    return 0;
}