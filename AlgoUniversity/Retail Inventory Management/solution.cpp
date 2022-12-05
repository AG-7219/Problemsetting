#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> arr(n);
        set<pair<int,int>> st;
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            st.emplace(arr[i],i);
        }
        while(!st.empty())
        {
            auto [value,index] = *st.begin();
            st.erase(st.begin());
            ans += value;
            if(index-1>=0) st.erase({arr[index-1],index-1});
            if(index+1<n) st.erase({arr[index+1],index+1});
        }
        cout<<ans<<"\n";
    }
} 