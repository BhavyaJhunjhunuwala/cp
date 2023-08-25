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
    for(int i=0; i<t; i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x>=y)
        {
            cout<<y<<endl;
        }
        else{
            ll tim=y/x;
            ll extr=y%x;
            ll ans=0;
            if(extr==0)
            {
                ans=tim*tim*x;
            }
            else{
                ans=tim*tim*(x-extr)+(tim+1)*(tim+1)*extr;
            }
        cout<<ans<<endl;
        }
    }
    return 0;
}