#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    auto helper = [&](ll min_x, ll max_x, ll source)
    {
        if(source >= min_x and source<=max_x) return 2*(max_x - min_x) - max(source - min_x, max_x - source);
        else if(source >= max_x) return source - min_x;
        else return max_x - source;
    };

    ll t; cin>>t;
    while(t--)
    {
        ll n, source; cin>>n>>source;
        vector<ll> cities(n); for(ll& city:cities) cin>>city;
        ll ans = 1e18;
        multiset<ll> ms(begin(cities),end(cities));
        for(ll& city:cities)
        {
            ms.erase(ms.find(city));
            ans = min(ans,helper(*ms.begin(), *ms.rbegin(), source));
            ms.insert(city);
        }
        cout<<ans<<"\n";
    }
    return 0;
}