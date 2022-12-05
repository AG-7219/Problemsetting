#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int maxProfit(ll k, vector<ll>& prices) 
{
    // dp[k][state] -> I have performed k transactions so far and state determines my current state
    
    // if I have a stock (state=1) i can go to dp[k+1][0]
    
    // if I dont have a stock (state=0) i can go to dp[k][1]
    
    vector<vector<ll>> dp(2,vector<ll> (k+1,-1e18));
    dp[0][0] = 0;
    for(ll& i:prices)
    {
        for(ll so_far = k-1; so_far>=0; so_far--)
        {
            //if state is 1, we have a stock to sell
            dp[0][so_far+1] = max(dp[0][so_far+1], dp[1][so_far]+i);
            
            //if state is 0, we can buy stock today
            dp[1][so_far] = max(dp[1][so_far], dp[0][so_far] - i);
        }
    }
    return *max_element(dp[0].begin(), dp[0].end());
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        vector<ll> prices(n); for(ll& price:prices) cin>>price;
        cout<<maxProfit(k,prices)<<"\n";
    }
}