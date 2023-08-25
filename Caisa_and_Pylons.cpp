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
        cin>>v[i];
    }
    ll expense=0-v[0];
    ll curr_energy=0;
    for(ll i=0; i<n-1; i++)
    {
        curr_energy+=v[i]-v[i+1];
        if(curr_energy<0) expense+=curr_energy, curr_energy=0; 
    }
    cout<<abs(expense)<<endl;
    return 0;
}
