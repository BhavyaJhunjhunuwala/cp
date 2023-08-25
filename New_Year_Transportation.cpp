#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>n>>t;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[i+1+v[i]]++;
    }
    int flag=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(mp.find(t)!=mp.end())
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}