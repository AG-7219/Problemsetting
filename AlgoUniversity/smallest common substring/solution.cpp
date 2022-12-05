#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,m; cin>>n>>m;
        string s,t; cin>>s>>t;
        vector<ll> cnt1(26,0), cnt2(26,0);
        for(char c:s) cnt1[c-'a']++;
        for(char c:t) cnt2[c-'a']++;
        ll ans = 0;
        for(int i=0; i<26; i++) ans += cnt1[i]*cnt2[i];
        cout<<ans<<"\n";
    }
}