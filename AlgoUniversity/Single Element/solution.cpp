#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) 
{
    int lo = 0, hi = (nums.size()-1)/2;
    while(hi > lo)
    {
        int mid = lo + (hi - lo)/2;
        int index = 2*mid;
        
        //we are to the left of the required element and should move right
        if(index+1<nums.size() and nums[index+1]==nums[index]) lo = mid+1;
        else hi = mid;
    }
    assert(lo == hi);
    return nums[2*lo];
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector  <int> a(n); for(int& val:a) cin>>val;
        cout<<singleNonDuplicate(a)<<"\n";
    }
}