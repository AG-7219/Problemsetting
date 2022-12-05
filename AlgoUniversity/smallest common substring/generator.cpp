#include<bits/stdc++.h>
#include"testlib.h"

using namespace std;

int main(int argc,char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    int sum_m = atoi(argv[3]);
    vector n_list = rnd.partition(t,sum_n,1);
    vector m_list = rnd.partition(t,sum_m,1);
    println(t);
    for(int i=0; i<t; i++)
    {
        setTestCase(i+1);
        int n = n_list[i];
        int m = m_list[i];
        println(n,m);
        println(rnd.next("[a-z]{"+to_string(n)+"}"));
        println(rnd.next("[a-z]{"+to_string(m)+"}"));
    }
    return 0;
}