#include<bits/stdc++.h>
#include "./../../jngen.h"

using namespace std;

int main(int argc, char *argv[]) {
    registerGen(argc, argv);
    parseArgs(argc, argv);
    int n,m,e,s,file;
    getPositional(n,m,e,s,file);
    freopen64(("./testcases/random"+to_string(file)+".txt").c_str(),"w",stdout);

    setMod().printN().printM().add1();
    cout<<Graph::randomStretched(n,m,e,s).allowMulti(false).g().shuffled()<<"\n";
}