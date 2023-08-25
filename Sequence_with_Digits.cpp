#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(ll x)
{
    ll maxi=LLONG_MIN;
    ll mini=LLONG_MAX;
    while(x>0)
    {
        ll y=x%10;
        x=x/10;
        maxi=max(maxi,y);
        mini=min(mini,y);
    }
    return maxi*mini;
} 

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        for(ll i=1; i<k; i++)
        {
            ll y=solve(x);
            if(y==0) break;
            x+=y;
        }
        cout<<x<<endl;
    }
    return 0;
}