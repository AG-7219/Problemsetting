#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,q; cin>>n>>q;
        string s; cin>>s;
        vector<vector<int>> pre(n,vector<int> (26,0));
        pre[0][s[0]-'a']++;
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<26; j++) pre[i][j] = pre[i-1][j];
            pre[i][s[i] - 'a']++;
        }
        while(q--)
        {
            ll ans = 0;
            int l,r; cin>>l>>r;
            l--, r--;
            for(int i=0; i<26; i++)
            {
                ll freq = pre[r][i];
                if(l) freq -= pre[l-1][i];
                ans += (freq*(freq+1))/2;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}