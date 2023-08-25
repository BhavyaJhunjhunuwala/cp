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
        ll x,y,n;
        cin>>x>>y>>n;
        if(n%x>=y)
        {
            cout<<(n/x)*x+y<<endl;
        }
        else{
            cout<<((n/x)-1)*x+y<<endl;
        }
    }
    return 0;
}