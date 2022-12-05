#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> arr(n+2,0);
        for(int i=1; i<=n; i++) cin>>arr[i];
        int ans = 0;
        for(int i=1; i<=n; i++) if(arr[i-1]+arr[i+1] == 2*arr[i]) ans++;
        cout<<ans<<"\n";
    }
}