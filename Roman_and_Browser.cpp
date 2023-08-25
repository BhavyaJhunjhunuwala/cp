#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    ll b=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    b=n/2+1;
    ll e=0,s=0;
    for(int i=0; i<n; i++)
    {
        if(b-i*k>0)
        {
            v[b-i*k]=0;
        }
        else if(b+i*k<n)
        {
            v[b+i*k]=0;
        }
        if(v[i]==1)
        {
            e++;
        }
        else if(v[i]==-1)
        {
            s=s-1;
        }
    }
    cout<<e<<" "<<s<<"/////";
    cout<<abs(e-s)<<endl;
    return 0;
}