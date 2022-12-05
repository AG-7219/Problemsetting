#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

ll numDecodings(string& s) {
    ll n = s.length();
    vector<ll> dp(n,0);
    
    auto valid = [&](string t)
    {
        if(t[0] == '0' or stoi(t) > 26) return false;
        return true;
    };  
    
    auto helper = [&](ll i)
    {
        if(i<0) return 1LL;
        return dp[i];
    };
    
    for(ll i=0; i<n; i++)
    {
        if(valid(s.substr(i,1))) dp[i] = helper(i-1);
        if(i and valid(s.substr(i-1,2))) dp[i] = (dp[i] + helper(i-2))%mod;
    }
    return dp.back();
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;   
        cout<<numDecodings(s)<<"\n";
    }
}