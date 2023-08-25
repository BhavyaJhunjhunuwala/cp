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
        ll a,b;
        cin>>a>>b;
        cout<<min(max(2*a,b),max(2*b,a))*min(max(2*a,b),max(2*b,a))<<endl;
    }
    return 0;
}