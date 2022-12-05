#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    ios_base::sync_with_stdio(false);
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    int sum_m = atoi(argv[3]);
    int mn = atoi(argv[4]);
    int mx = atoi(argv[5]);

    vector n_list = rnd.partition(t,sum_n,1);
    vector m_list = rnd.partition(t,sum_m,1);
    println(t);
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = n_list[testcase];
        int m = m_list[testcase];
        println(n,m);
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) cout<<rnd.next(mn,mx)<<" \n"[j==m-1];
    }
    return 0;
}