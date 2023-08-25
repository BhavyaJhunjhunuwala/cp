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
        ll n,m,k;
        cin>>n>>m>>k;
        ll card=n/k;
        if(m<=card)
        {
            cout<<m<<endl;
        }
        else{
            ll rem=m-card;
            ll other;
            if(rem%(k-1)) other=(rem/(k-1))+1;
            else other=rem/(k-1);
            cout<<card-other<<endl;
        }
    }
    return 0;
}