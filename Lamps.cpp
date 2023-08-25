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
    while(t--){
        // ll n;
        // cin>>n;
        // vector<pair<ll,ll>> v(n);
        // unordered_map<ll,ll> mp;
        // for(ll i=0; i<n; i++)
        // {
        //     ll a,b;
        //     cin>>a>>b;
        //     mp[a]++;
        //     v[i]={a,b};
        // }
        // vector<ll> help;
        // for(auto it=mp.begin(); it!=mp.end(); it++)
        // {
        //    help.push_back(it->first);
        // }
        // sort(help.rbegin(),help.rend());
        // sort(v.rbegin(),v.rend());
        // ll sum=0,count=0;
        // for(ll j=0; j<help.size(); j++)
        // {
        //     for(ll i=0; i<v.size(); i++)
        //     {
        //         if(v[i].first==help[j] && count!=help[j])
        //         {
        //             sum+=v[i].second;
        //             count++;
        //         }
        //     }
        //     count=0;
        // }
        // cout<<sum<<endl;

        ll n;
        cin>>n;
        vector<pair<ll,ll>> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        unordered_map<ll,vector<ll>> mp;
        for(ll i=0; i<v.size(); i++)
        {
            mp[v[i].first].push_back(v[i].second);
        }
        ll sum=0,count=0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            sort(it->second.rbegin(),it->second.rend());
            for(ll i=0; i<it->second.size(); i++)
            {
               if(count!=it->first)
               {
                sum+=it->second[i];
                count++;
               }
            }
            count=0;
        }
            cout<<sum<<endl;
    }
    return 0;
}