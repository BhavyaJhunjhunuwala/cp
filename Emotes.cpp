#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll sum=0;
         sum=v[n-1]*k;
        sum+=v[n-2];
            sum=sum*(m/(k+1))+m%(k+1)*v[n-1];
    cout<<sum<<endl;
    return 0;
}