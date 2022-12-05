#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll jobScheduling(vector<ll>& start, vector<ll>& end, vector<ll>& profit) 
{
    ll n = start.size();
    vector<ll> o(n); iota(o.begin(),o.end(),0);
    sort(o.begin(),o.end(), [&](const ll& l, const ll& r){ return start[l] < start[r]; });
    vector<ll> dp(n,0), mx(n+1,0);
    dp[n-1] = mx[n-1] = profit[o[n-1]];
    for(ll i=n-2; i>=0; i--)
    {
        //dont take this 
        dp[i] = dp[i+1];
        
        //take this
        ll lo = i+1, hi = n-1, j = n;
        while(hi >= lo)
        {
            ll mid = lo + (hi - lo)/2;
            if(start[o[mid]] >= end[o[i]]) j = mid, hi = mid-1;
            else lo = mid+1;
        }
        dp[i] = max(dp[i], profit[o[i]] + mx[j]);
        mx[i] = max(dp[i], dp[i+1]);
    }
    return mx[0];
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> start(n,0), end(n,0), profit(n,0);
        for(int i=0; i<n; i++) cin>>start[i]>>end[i]>>profit[i], profit[i] += end[i] - start[i];
        cout<<jobScheduling(start,end,profit)<<"\n";
    }
}