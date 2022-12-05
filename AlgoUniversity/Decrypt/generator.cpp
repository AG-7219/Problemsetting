#include<bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);
    vector n_list = rnd.partition(t,sum_n);
    println(t);
    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        println(n_list[testcase]);
        int mask = rnd.next(1,(1<<10)-2);
        string chars = "";
        for(int bit=0; bit<10; bit++) if((mask>>bit)&1) chars.push_back(char('A' + bit));
        for(int i=0; i<n_list[testcase]; i++)
        {
            cout<<rnd.next("[0-9"+chars+"]{1,10}");
            if(i == n_list[testcase]-1) cout<<"\n";
            else cout<<" ";
        }
    }
    return 0;
}