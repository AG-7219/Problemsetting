#include<bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    int sum_q = atoi(argv[3]);
    vector n_list = rnd.partition(t,sum_n,1);
    vector q_list = rnd.partition(t,sum_q,1);
    for(int i=0; i<t; i++)
    {
        setTestCase(i+1);
        int n = n_list[i], q = min(n,q_list[i]);
        println(n,q);
        while(q--)
        {
            int type = rnd.next(1,2);
            int x = rnd.next(1,n);
            if(type == 1) n--;
            println(type,x);
        }
    }
    return 0;
}
