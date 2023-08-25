#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,a;
    cin>>n>>m>>a;
    if((n%a!=0) || (m%a!=0))
    {
        if(n%a!=0 && m%a==0)
        {
            cout<<((n/a)+1)*(m/a)<<endl;
        }
        else if(n%a==0 && (m%a!=0))
        {
           cout<<((n/a))*((m/a)+1)<<endl;
        }
        else{
            cout<<((n/a)+1)*((m/a)+1)<<endl;
        }
    }
    else{
    cout<<((n/a))*((m/a))<<endl;
    }
    return 0;
}