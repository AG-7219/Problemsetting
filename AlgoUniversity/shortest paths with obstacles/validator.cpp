#include<bits/stdc++.h>
#include "./../../testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    registerValidation(argc,argv);
    int n = inf.readInt(1,40,"n");
    inf.readSpace();
    int m = inf.readInt(1,40,"m");
    inf.readSpace();
    int k = inf.readInt(1,1600,"k");
    inf.readEoln();

    for(int i=0; i<n; i++)
    {
        inf.readToken("[0-1]{"+to_string(m)+"}");
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}