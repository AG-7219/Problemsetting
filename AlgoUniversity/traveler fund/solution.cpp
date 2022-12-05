#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll oo = 1e15;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> a(n); for(ll& val:a) cin>>val;

        auto check = [&](ll x)
        {
            for(ll& val:a)
            {
                x += val;
                if(x <= 0) return false;
            }
            return true;
        };

        ll lo = 0, hi = oo, ans = -1;
        while(hi >= lo)
        {
            ll mid = lo + (hi - lo)/2;
            if(check(mid)) ans = mid, hi = mid-1;
            else lo = mid+1;
        }
        assert(ans!=-1);
        cout<<ans<<"\n";
    }
    return 0;
}