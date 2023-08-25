#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v[i]=a;
    }
    sort(v.begin(),v.end());
    if(v[n-2]+v[n-3]<=v[n-1]) cout<<"NO"<<endl; 
    else{
        cout<<"YES"<<endl;
        ll a=v[n-3];
        ll b=v[n-2];
        ll c=v[n-1];
        v[n-3]=b;
        v[n-2]=c;
        v[n-1]=a;
        for(ll i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}