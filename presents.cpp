#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]]=i+1;
    }
    for(int i=0; i<n; i++)
    {
        if(mp.find(i+1)!=mp.end())
        {
            cout<<mp[i+1]<<" ";
        }
    }
    return 0;
}