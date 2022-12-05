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
        int index = rnd.next(0,n-1);
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int x = rnd.next(min_x,max_x);
            a.push_back(x);
            if(i!=index) a.push_back(x);
        }
        println(a.size());
        println(a);
    }
    return 0;
}