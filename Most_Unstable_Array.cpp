#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else if(n==2)
        {
            cout<<m<<endl;
        }
        else{
            cout<<2*m<<endl;
        }

    }
    return 0;
}