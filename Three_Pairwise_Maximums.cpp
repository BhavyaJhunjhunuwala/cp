#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    vector<ll> v(3);
    for(int i=0; i<3; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[2]==v[1] && v[2]>=v[0] && v[1]>=v[0])
    {
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}