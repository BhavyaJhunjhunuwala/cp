#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin>>k;
    string str;
    cin>>str;
    unordered_map<char,int> mp;
    for(int i=0; i<str.length(); i++)
    {
        mp[str[i]]++;
    }
    string ans="";
    int flag=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second%k!=0)
        {
            cout<<-1<<endl;
            flag=1;
            break;
        }
        else{
            int n=(it->second)/k;
            for(int i=0; i<n; i++)
            {
                ans+=it->first;
            }
        }
    }
    if(flag!=1)
    {
    string help=ans;
    for(int i=0; i<k-1; i++)
    {
        ans+=help;
    }
    cout<<ans<<endl;
    }
    return 0;
}