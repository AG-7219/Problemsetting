#include<bits/stdc++.h>
using namespace std;

const int MX = 1e9;

vector<int> processJumps(vector<vector<int>> locations, vector<int> queries) 
{
    map<int,set<pair<int,int>>> leaves1, leaves2;
    int r=-1,c=-1;
    for(auto& location:locations)
    {
        int x = location[0], y = location[1];
        assert(x<=MX and y<=MX);
        leaves1[x-y].emplace(x,y);
        leaves2[x+y].emplace(x,y);
        if(r==-1 and c==-1) r = x, c = y;
    }
    for(int query:queries)
    {
        int nr = -1, nc = -1;
        cout<<query;
        if(query == 1)
        {
            auto it = leaves1[r-c].upper_bound({r,c});
            if(it == leaves1[r-c].end()) continue;
            nr = it->first, nc = it->second;
        }
        else if(query == 2)
        {
            auto it = leaves2[r+c].upper_bound({r,c});
            if(it == leaves2[r+c].end()) continue;
            nr = it->first, nc = it->second;
        }
        else if(query == 3)
        {
            auto it = leaves2[r+c].lower_bound({r,c});
            assert(it->first == r and it->second ==c);
            if(it == leaves2[r+c].begin()) continue;
            it--;
            nr = it->first, nc = it->second;
        }
        else 
        {
            auto it = leaves1[r-c].lower_bound({r,c});
            assert(it->first == r and it->second ==c);
            if(it == leaves1[r-c].begin()) continue;
            it--;
            nr = it->first, nc = it->second;
        }
        assert(nr!=-1 and nc!=-1);
        leaves1[r-c].erase({r,c});
        leaves2[r+c].erase({r,c});
        r = nr, c = nc;
    }
    return vector<int> ({r,c});
}

int main()
{
    // int n,m; cin>>n>>m;
    // string s; cin>>s;
    // vector<vector<int>> locations;
    // while(n--)
    // {
    //     int x,y; cin>>x>>y;
    //     locations.push_back({x,y});
    // }
    // vector<int> queries(m); for(int i=0; i<m; i++) queries[i] = s[i] - 'A'+1;
    // vector<int> ans = processJumps(locations,queries);
    // cout<<ans[0]<<" "<<ans[1]<<"\n";
    int n; cin>>n;
    vector<vector<int>> locations;
    while(n--)
    {
        int x,y; cin>>x>>y;
        locations.push_back(vector<int> ({x,y}));
    }
    int q; cin>>q;
    vector<int> queries;
    while(q--)
    {
        int x; cin>>x;
        queries.push_back(x);
    }
    vector<int> ans = processJumps(locations,queries);
    cout<<ans[0]<<" "<<ans[1]<<"\n";
}

