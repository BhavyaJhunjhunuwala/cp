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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n,0);
        for(ll i=0; i<n; i++)
        {
            if(i%k==0) v[i]=1;
        }
        if(v[n-1]==0) v[n-1]=1;
        ll sum=0;
        for(ll i=0; i<n; i++) sum+=v[i];
        cout<<sum<<endl;
    }
    return 0;
}