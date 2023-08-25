#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x,y,z;
    cin>>x>>y>>z;
    ll ans=0;
    ans+=(x/z)+(y/z);
    // x=x-(x/z)*z;
    // y=y-(y/z)*z;
    ll exz=0;
    int flag=0;
    if(x%z==0 && y%z==0)
    {
        cout<<ans<<" "<<0<<endl;
        return 0;
    }
    else if(x%z>=y%z)
    {
        flag=1;
        exz=y%z;
        ll help=x%z+y%z;
        if(help>=z)
        {
            ans+=help/z;
        }
        else{
            exz=0;
        }
    }
    else if(y%z>x%z)
    {
        exz=x%z;
        ll help=x%z+y%z;
        if(help>=z)
        {
            ans+=help/z;
        }else{
            exz=0;
        }
    }
    if(flag)
    {
       exz= min(exz,z-x%z);
    }
    else{
         exz=min(exz,z-y%z);
    }
    cout<<ans<<" "<<exz<<endl;
    return 0;
}