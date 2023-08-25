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
    vector<ll> v(3,0);
    for(int i=0; i<n; i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        v[0]+=x;
        v[1]+=y;
        v[2]+=z;
    }
    if(v[0]==0 && v[1]==0 && v[2]==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}