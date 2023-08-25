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
        ll n,k;
        cin>>n>>k;
        if(k<n)
        {
            if(n%k==0) k=k*(n/k);
            else k=k*((n/k)+1);
        }
        if(k%n==0)cout<<k/n<<endl;
        else cout<<(k/n)+1<<endl;
    }
    return 0;
}