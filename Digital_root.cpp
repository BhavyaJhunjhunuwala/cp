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
    for(int i=0; i<n; i++)
    {
        ll n,k;
        cin>>n>>k;
        cout<<(n-1)*9+k<<endl;
    }
    return 0;
}