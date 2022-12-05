#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
    string file = string(argv[1]);
    freopen(("./old/"+file).c_str(),"r",stdin);
    freopen(("./new/"+file).c_str(),"w",stdout);
    int n,q;
    cin>>n>>q;
    string query; cin>>query;

    cout<<n<<"\n"<<2<<"\n";
    while(n--)
    {
        int x,y; cin>>x>>y; cout<<x<<" "<<y<<"\n";
    }
    cout<<q<<"\n";
    for(int i=0; i<q; i++) cout<<(query[i]-'A')+1<<"\n";
}