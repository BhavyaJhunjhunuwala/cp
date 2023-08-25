#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll res=(n*(n+1))/2;
    ll x=2, y;
    while(x<=n && res%x!=0)
    {
        x++;
    }
    y=(n/x)-1;
    if((__gcd(x,x*y)<=1)) cout<<"No"<<endl;
    else{
        cout<<"Yes"<<endl;
        cout<<1<<" "<<x<<endl;
        cout<<n-1<<" ";
        for(int i=1; i<=n; i++)
        {
            if(i!=x)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;
}