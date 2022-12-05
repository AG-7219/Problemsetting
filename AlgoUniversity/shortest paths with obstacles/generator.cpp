#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int k = atoi(argv[3]);
    println(n,m,k);
    for(int i=0; i<n; i++) println(rnd.next("[0-1]{"+to_string(m)+"}"));
    return 0;
}