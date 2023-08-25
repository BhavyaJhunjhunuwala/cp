#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]<0)cout<<v[0]<<endl;
        else cout<<v[n-1]<<endl;
       
    }
    return 0;
}