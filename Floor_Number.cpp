#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        if(n==1 && x==1)
        {
            cout<<1<<endl;
        }
        else{
        ll res=n-2+x;
        if(res%x==0)
        {
            cout<<res/x<<endl;
        }
        else{
            cout<<(res/x)+1<<endl;
        }
        }
    }
    return 0;
}