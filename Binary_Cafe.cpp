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
        ll a=(pow(2,k)+0.5);
        ll b=(n+1);
        if(a<b && a>0) cout<<a<<endl;
        else cout<<b<<endl;
    }
    return 0;
}