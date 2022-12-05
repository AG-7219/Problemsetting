#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int s; cin>>s;
        if(s == 1)
        {
            cout<<1<<"\n";
            continue;
        }
        if(s%2 == 0)
        {
            cout<< -1<<"\n";
            continue;
        }
        int x = (s-1)/2;
        string ans = "";
        for(int digit:{8,6,4,2,0})
        {
            if(x >= digit)
            {
                ans.push_back(char('0' + digit));
                x -= digit;
                while(x >= 9)
                {
                    ans.push_back('9');
                    x -= 9;
                }
                if(x) ans.push_back(char('0' + x));
                reverse(begin(ans),end(ans));
                cout<<ans<<"\n";
                break;
            }
        }
    }
}