#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b)
{
    ll result=min(a,b);
    while(result>0)
    {
        if(a%result==0 && b%result==0)
        {
            break;
        }
        else{
            result--;
        }
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        ll x=l, y=2*l;
        if(y>r)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}