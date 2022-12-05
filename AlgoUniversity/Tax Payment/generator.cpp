#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc,argv,1);
    int n = atoi(argv[1]);
    int q = atoi(argv[2]);
    int mn = atoi(argv[3]);
    int mx = atoi(argv[4]);
    println(n,q);
    for(int i=0; i<n; i++) cout<<rnd.next(mn,mx)<<" \n"[i==n-1];
    while(q--)
    {
        int l = rnd.next(1,n);
        int r = rnd.next(l,n);
        int x = rnd.next(mn,mx);
        println(l,r,x);
    }
    return 0;
}