#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    ll minset=INT_MAX;
    unordered_map<ll,ll> mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    ll cnt=0;
    ll ans=0;
    for(auto it: mp)
    {
        cnt+=it.second%2;
        ans+=it.second/2*2;
    }
    ans+=(cnt+1)/2;
    cout<<ans<<endl;
    return 0;
}