#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,m;
    cin>>n>>m;
    if((n*m)%2==1)
    {
        cout<<(n*m)/2+1<<endl;
    }
    else{
        cout<<(n*m)/2<<endl;
    }
    }
    return 0;
}