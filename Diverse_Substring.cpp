#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string str;
    cin>>str;
    unordered_map<char,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[str[i]]++;
    }
    int flag=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second>=n)
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0; i<str.length()-1; i++)
        {
            if(str[i]!=str[i+1])
            {
                cout<<str[i]<<str[i+1]<<endl;
                return 0;
            }
        }
    }
    return 0;
}