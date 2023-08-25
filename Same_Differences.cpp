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
        ll n;
        cin>>n; 
        ll count=0;
        unordered_map<ll,ll>mp;
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            mp[x-(i+1)]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            ll z=it->second;
            count+=((z)*(z-1))/2;
        }
        cout<<count<<endl;
    }
    return 0;
}