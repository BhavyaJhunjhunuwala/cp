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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> v(n);
        ll last=-1;
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]>q) 
            {
                last=i;
            } 
            else 
            {
                ll h1=i-last-k+1;
                ll a=0;
                ans+=max(a,h1);
            }
        }
       cout<<ans<<endl;
    }
    return 0;
}