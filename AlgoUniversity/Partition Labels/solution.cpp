#include<bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string& s) 
{
    vector<int> ans, last(26,-1);
    for(int i=0; i<s.length(); i++)
    {
        last[s[i]-'a'] = i;
    }
    int i = 0;
    while(i<s.length())
    {
        int target = last[s[i]-'a'];
        int j = i;
        while(j<target)
        {
            target = max(target,last[s[j]-'a']);
            j++;
        }
        ans.push_back(j-i+1);
        i = j+1;
    }
    return ans;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        auto ans = partitionLabels(s);
        for(int val:ans) cout<<val<<" ";
        cout<<"\n";
    }
}