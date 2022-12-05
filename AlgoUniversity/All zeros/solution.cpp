#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,m; cin>>n>>m;
        vector<ll> a(n); for(int i=0; i<n; i++) cin>>a[i];

        auto check = [&](ll k)
        {
            ll operations = 0;
            for(ll& val:a)
            {
                if(!val) continue;
                if(!k) return false;
                operations += (val + k-1)/k;
            }
            return operations <= m;
        };

        ll lo = 0, hi = 1e18, ans = -1;
        while(hi >= lo)
        {
            ll mid = lo + (hi - lo)/2;
            if(check(mid)) ans = mid, hi = mid-1;
            else lo = mid+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}