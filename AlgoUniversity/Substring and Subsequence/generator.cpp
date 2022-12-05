#include<bits/stdc++.h>
#include"./../../testlib.h"

using namespace std;

int main(int argc,char* argv[])
{
    registerGen(argc,argv,1);
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    println(rnd.next("[a-z]{"+to_string(n)+"}"));
    println(rnd.next("[a-z]{"+to_string(m)+"}"));
    return 0;
}