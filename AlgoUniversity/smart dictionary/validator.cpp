#include<bits/stdc++.h>
#include "testlib.h"

using namespace std;
const int N = 1000000;

int main(int argc, char* argv[])
{
    registerValidation(argc, argv);
    int n = inf.readInt(1,N,"n");
    inf.readEoln();

    int sum = 0;
    while(n--)
    {
        string s = inf.readString("[a-z]");
        inf.readEoln();
        sum += s.length();
    }
    ensuref(sum <= N, "Sum of length of all strings should not exceed 1e6");

    inf.readEof();
    return 0;
}