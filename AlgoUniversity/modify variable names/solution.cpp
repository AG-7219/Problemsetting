#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        if(s.find('_') != s.npos)
        {
            //found '_', c++ variable name  
            stringstream stream(s);
            string ans = "", cur;
            while(getline(stream,cur,'_'))
            {
                cur[0] = (cur[0]-'a') + 'A';
                ans += cur;
            }
            cout<<ans<<"\n";
        }
        else 
        {
            //java variable name
            string ans = "", cur = "";
            for(int i=0; i<s.length(); i++)
            {
                if(isupper(s[i]))
                {
                    ans += cur;
                    ans.push_back('_');
                    cur.clear();
                    cur = (s[i] - 'A') + 'a';
                }
                else cur.push_back(s[i]);
            }
            ans += cur;
            cout<<ans<<"\n";
        }
    }
    return 0;
}