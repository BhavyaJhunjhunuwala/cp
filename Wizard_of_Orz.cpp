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
        ll n;
        cin>>n;
        ll a=9;
        string ans="";
        for(int i=0; i<n%9; i++)
        {
            ans+=to_string(a);
            a--;
        }
        cout<<ans<<endl;
    }
    return 0;
}