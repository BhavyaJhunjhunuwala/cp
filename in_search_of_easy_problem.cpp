#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        mp[v[i]]++;
    }
    if(mp.find(1)!=mp.end())
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}