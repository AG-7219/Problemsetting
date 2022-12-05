#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        ll n = s.length();
        vector<vector<ll>> pre(n,vector<ll> (4)), suf(n,vector<ll> (4,0));
        ll count0 = s[0] == '0', count1 = s[0] == '1';
        for(int i=1; i<n; i++)
        {
            pre[i] = pre[i-1];
            if(s[i] == '0')
            {
                pre[i][0] = (pre[i][0] + count0)%mod;
                pre[i][2] = (pre[i][2] + count1)%mod;
                count0++;
            }
            else
            {
                pre[i][1] = (pre[i][1] + count0)%mod;
                pre[i][3] = (pre[i][3] + count1)%mod;
                count1++;
            }
        }

        count0 = s.back() == '0', count1 = s.back() == '1';
        for(int i=n-2; i>=0; i--)
        {
            suf[i] = suf[i+1];
            if(s[i] == '0')
            {
                suf[i][0] = (suf[i][0] + count0)%mod;
                suf[i][2] = (suf[i][2] + count1)%mod;
                count0++;
            }
            else
            {
                suf[i][1] = (suf[i][1] + count0)%mod;
                suf[i][3] = (suf[i][3] + count1)%mod;
                count1++;
            }
        }

        ll ans = 0;
        for(int i=2; i+2<n; i++)
        {
            for(int j=0; j<4; j++)
            {
                ll temp = (pre[i-1][j] * suf[i+1][j])%mod;
                ans = (ans + temp)%mod;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}