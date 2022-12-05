#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> a(n); for(auto& val:a) cin>>val;
        vector<ll> prefix_sum(n,a[0]), prefix_max(n,a[0]);
        for(int i=1; i<n; i++) prefix_sum[i] = (prefix_sum[i-1] + a[i])%mod;
        for(int i=1; i<n; i++) prefix_sum[i] = (prefix_sum[i-1] + prefix_sum[i])%mod;
        for(int i=1; i<n; i++) prefix_max[i] = max(prefix_max[i-1], a[i]);
        for(int i=0; i<n; i++) cout<<((prefix_max[i]*(i+1))%mod + prefix_sum[i])%mod<<" \n"[i==n-1];
    }
}