#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        vector<vector<int>> matrix(n,vector<int> (m));
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>matrix[i][j];
        vector<int> mn(m,INT_MAX);
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(matrix[i][j]!=-1) mn[j] = min(mn[j],matrix[i][j]);
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) if(matrix[i][j]==-1 and mn[j]!=INT_MAX) matrix[i][j] = mn[j];
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) cout<<matrix[i][j]<<" \n"[j==m-1];
    }
}