#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m,k; cin>>n>>m>>k;
        priority_queue<int,vector<int>,greater<int>> pq;
        while(n--)
        {
            int x; cin>>x;
            if(pq.size() < k) pq.push(x);
            else if(pq.top() < x)
            {
                pq.pop();
                pq.push(x);
            }
        }
        cout<<pq.top()<<" ";
        while(m--)
        {
            int x; cin>>x;
            if(pq.top() < x)
            {
                pq.pop();
                pq.push(x);
            }
            cout<<pq.top()<<" ";
        }
        cout<<"\n";
    }
}