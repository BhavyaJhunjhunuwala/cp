#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    vector<ll> b(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    ll low=0, high=1000+k;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
        ll z=0, cost=0;

        for(int i=0; i<n; i++)
        {
            cost+=max(v[i]*mid-b[i],z);
        }
        if(cost<=k) low=mid+1;
        else high=mid-1;
    }
    cout<<high<<endl;
    return 0;
}