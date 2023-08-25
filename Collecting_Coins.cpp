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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        if((n+a+b+c)%3==0)
        {
            ll k=(n+a+b+c)/3;
            if(k-a>=0 && k-b>=0 && k-c>=0)
            {
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}