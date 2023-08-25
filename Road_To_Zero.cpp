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
        ll x,y,a,b;
        cin>>x>>y;
        cin>>a>>b;
        if(x>y)
        {
            swap(x,y);
        }
       ll ans1,ans2;
       ans1=x*a+y*a;
       ans2=(y-x)*a+x*b;
       cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}