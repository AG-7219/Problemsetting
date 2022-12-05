#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int> arr(n); for(int& val:arr) cin>>val;
        map<int,int> freq;
        multiset<int> counts;
        for(int i=0; i<n; i++)
        {
            if(freq[arr[i]]) counts.erase(freq[arr[i]]);
            counts.insert(++freq[i]);
            if(i>=k)
            {
                counts.erase(freq[arr[i-k]]--);
                if(freq[arr[i-k]]) counts.insert(freq[arr[i-k]]);
            }
            if(i>=k-1)
            {
                if(i) cout<<" ";
                cout<<*counts.rbegin();
            }
        }
        cout<<"\n";
    }
}