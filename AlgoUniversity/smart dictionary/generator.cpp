#include<bits/stdc++.h>
#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int n = atoi(argv[1]);
    int ans = atoi(argv[2]);
    int sum_len = atoi(argv[3]);
 
    vector<int> len_list = rnd.partition(n, sum_len, ans);
    const string same = rnd.next("[a-z]{"+to_string(ans)+"}");    
 
    println(n);
    for(int len:len_list)
        println(same + rnd.next("[a-z]{0,"+to_string(len-ans)+"}"));
}
