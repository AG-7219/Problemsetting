#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n, ans = 0; 
        cin>>n;
        vector<ll> wt(10,0), first(10,0);
        while(n--)
        {
            string s; cin>>s;
            if(s[0] >= 'A' and s[0] <= 'J') first[s[0] - 'A'] = 1;
            reverse(begin(s),end(s));
            ll temp = 1;
            for(int i=0; i<s.length(); i++)
            {
                if(s[i] >= 'A' and s[i] <= 'J') wt[s[i] - 'A'] += temp;
                else ans += (s[i]-'0')*temp;
                temp++;
            }
        }
        ll mx = 0;
        for(int i=0; i<10; i++) if(!first[i]) mx = max(mx,wt[i]);
        wt.erase(find(begin(wt),end(wt),mx));
        sort(wt.rbegin(),wt.rend());
        for(int i=0; i<9; i++) ans += (i+1)*wt[i];
        cout<<ans<<'\n';
    }
    return 0;
}