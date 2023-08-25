#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,l;
    cin>>n>>l;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int d=2*max(v[0],l-v[n-1]);
    for(int i=1; i<n; i++)
    {
        d=max((ll)d,(v[i]-v[i-1]));
    }
    cout<<fixed<<setprecision(9)<<(double)d/2; 
    return 0;
}