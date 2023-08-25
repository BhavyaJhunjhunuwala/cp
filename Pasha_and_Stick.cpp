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
    if(n%2==1)
    {
        cout<<0<<endl;
    }
    else{
    n=n/2;
    if(n%2==1)
    {
        cout<<n/2<<endl;
    }else{
        cout<<(n/2)-1<<endl;
    }
    }
    return 0;
}