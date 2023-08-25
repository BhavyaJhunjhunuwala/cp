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
        ll a,b;
        cin>>a>>b;
        if(a>=b)
        {
            if(a%b==0)
            {
                cout<<0<<endl;
            }
            else{
            cout<<b-a%b<<endl;
            }
        }
        else{
            cout<<b-a<<endl;
        }
    }
    return 0;
}