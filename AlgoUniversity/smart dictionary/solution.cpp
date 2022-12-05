#include<bits/stdc++.h>
using namespace std;

int longestCommonPrefix(vector<string>& strs) 
{
    int min_size = INT_MAX;
    for(int i=0; i<strs.size(); i++) min_size=min(min_size,(int)strs[i].size());
    for(int i=0; i<min_size; i++)
    {
        char c = strs[0][i];
        for(string s : strs) if(s[i]!=c) return i;
    }
    return min_size;
}

int main()
{
    int n; cin>>n;
    vector<string> strings(n);
    for(string& s:strings) cin>>s;
    cout<<longestCommonPrefix(strings)<<"\n";
}