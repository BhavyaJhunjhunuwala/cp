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
        vector<ll> v(n);
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==1 || v[i]==3) sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}