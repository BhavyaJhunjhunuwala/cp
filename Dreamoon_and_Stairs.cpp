#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    if(m>n)
    {
        cout<<-1<<endl;
    }
        else
        {
        vector<int> x(n/m+1);
        for(int t=0; t<=n/m; t++)
        {
            int val=n-m*t;
            x[t]=val;
        }
        vector<int> y(n/m+1);
        for(int i=0; i<=n/m; i++)
        {
            y[i]=n-2*x[i];
        }
        unordered_map<int,int> mp;
        for(int i=0; i<=n/m; i++)
        {
            mp[x[i]]=y[i];
        }
        int mini=INT_MAX;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>=0)
            {
                mini=min(mini,it->first+it->second);
            }
        }
        cout<<mini<<endl;
        }
    
    return 0;
}