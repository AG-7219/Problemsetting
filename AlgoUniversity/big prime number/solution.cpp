#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll nthSuperUglyNumber(ll n, vector<ll>& primes) 
{
    priority_queue<tuple<ll,ll,ll>,vector<tuple<ll,ll,ll>>,greater<>> pq;
    vector<ll> ans(1); ans[0] = 1;
    for(ll prime:primes) pq.emplace(prime,0,prime);
    while(ans.size()<n)
    {
        auto [cur,ind,prime] = pq.top();
        ans.push_back(cur);
        
        while(true)
        {
            auto [nxt,nind,nprime] = pq.top();
            if(nxt != cur) break;
            pq.pop();
            pq.emplace(ans[nind+1]*nprime,nind+1,nprime);
        }
    }
    return ans.back();
}

int main()
{
    ll n,k; cin>>n>>k;
    vector<ll> primes(n); for(ll& prime:primes) cin>>prime;
    cout<<nthSuperUglyNumber(k+1,primes)<<"\n";
    return 0;
}