#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        if(a>4) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}