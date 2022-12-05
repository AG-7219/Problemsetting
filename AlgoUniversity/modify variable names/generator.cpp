#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int t = atoi(argv[1]);
    int sum_n = atoi(argv[2]);

    println(t);

    //creates random partition of n over t testcases
    vector n_list = rnd.partition(t,sum_n,1);

    for(int testcase=0; testcase<t; testcase++)
    {
        setTestCase(testcase+1);
        int n = n_list[testcase];
        int words = rnd.next(1,max(1,n/2)), java = rnd.next(0,1);
        vector word_sizes = rnd.partition(words,n,2-(words==1));
        string ans = "";
        for(int word_size:word_sizes)
        {
            string cur = rnd.next("[a-z]{"+to_string(word_size)+"}");
            if(java)
            {
                if(!ans.empty()) cur[0] = (cur[0] - 'a') + 'A';
            } 
            else 
            {
                if(!ans.empty()) cur[0] = '_';
            }
            ans += cur;
        }
        println(n);
        println(ans);
    }

    return 0;
}