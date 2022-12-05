#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) 
{
    ll n = vals.size();
    vector<ll> o(n), adj[n], par(n), sizes(n,1); 
    map<ll,ll> freq[n];
    for(ll i=0; i<n; i++) o[i] = i, par[i] = i, freq[i][vals[i]] = 1;
    sort(begin(o),end(o),[&](const ll& l, const ll& r){ return vals[l] < vals[r]; });
    for(auto& edge:edges)
    {
        edge[0]--, edge[1]--;
        if(vals[edge[1]] > vals[edge[0]]) swap(edge[1],edge[0]);
        adj[edge[0]].push_back(edge[1]);
    }
    
    ll ans  = 0;
    function<ll(ll)> find = [&](ll x)
    {
        return par[x] = (par[x] == x) ? x : find(par[x]);  
    };
    
    auto merge = [&](ll a, ll b)
    {
        ll temp = vals[a];
        a = find(a);
        b = find(b);
        if(a == b) return ;
        ans += freq[a][temp] * freq[b][temp];
        if(sizes[b] > sizes[a]) swap(a,b);
        sizes[a] += sizes[b];
        par[b] = a;
        if(freq[b].size() > freq[a].size()) swap(freq[a],freq[b]);
        for(auto& [val,cnt]:freq[b]) freq[a][val] += cnt;
    };
    for(auto& node:o)
    {
        for(ll child:adj[node]) merge(node,child);
    }
    return ans;
}   

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> vals(n); for(int& val:vals) cin>>val;
        vector<vector<int>> edges(n-1,vector<int> (2)); for(auto& edge:edges) cin>>edge[0]>>edge[1];
        cout<<numberOfGoodPaths(vals,edges)<<"\n";
    }
}