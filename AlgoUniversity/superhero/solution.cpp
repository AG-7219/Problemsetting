#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll maximumsSplicedArray(vector<ll>& nums1, vector<ll>& nums2) 
{
    ll ans = 0, n = nums1.size();
    ll sum1 = accumulate(begin(nums1),end(nums1),0);
    ll sum2 = accumulate(begin(nums2),end(nums2),0);
    ll mn = 0, mx = 0, pre1 = 0, pre2 = 0;
    
    for(ll i=0; i<n; i++)
    {
        pre1 += nums1[i], pre2 += nums2[i];
        //try to maximise nums1 
        ll temp1 = sum1 - pre1 + pre2 + mx;
        ans = max(ans,temp1);
        
        //try to maximise nums2
        ll temp2 = sum2 + pre1 - pre2 - mn;
        ans = max(ans, temp2);
        
        mx = max(mx, pre1 - pre2);
        mn = min(mn, pre1 - pre2);
    }
    return ans;
}

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> a(n), b(n);
        for(ll& val:a) cin>>val;
        for(ll& val:b) cin>>val;
        cout<<maximumsSplicedArray(a,b)<<"\n";
    }
}
