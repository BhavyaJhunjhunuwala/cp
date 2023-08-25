#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t; 
    while(t--)
    {
        ll n; 
        cin>>n;
        vector<ll> v(n);
        ll count=0;
        unordered_map<int,int> mp;
        for(int i=0; i<n; ++i){
             cin>>v[i];
             mp[v[i]]=i+1;
        }
        for(ll sum=3; sum<2*n; sum++)
        {
            for(ll j=1; j*j<=sum; j++)
            {
                if(sum%j==0 && j*j!=sum && mp.find(j)!=mp.end() && mp.find(sum/j)!=mp.end() && mp[j]+mp[sum/j]==sum)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}