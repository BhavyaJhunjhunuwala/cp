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
    while(t--){
        ll n; 
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        if(n==1){
            cout<<0<<endl;
        }
        if(n%2==0){
            cout<<n/2<<endl;
        }else{
            cout<<(n/2)+1<<endl;
        }
        for(ll i=0; i<n; i=i+2){
            if(i==n-1){
               cout<<i-1+1<<" "<<i+1<<" "<<min(a[i],a[i+1])<<" "<<"1000000007"<<endl; 
            }else{
                cout<<i+1<<" "<<i+2<<" "<<"1000000007"<<" "<<min(a[i],a[i+1])<<endl;
                a[i+1]=min(a[i],a[i+1]);
                a[i]=1000000007;
            }
        }
    }
    return 0;
}