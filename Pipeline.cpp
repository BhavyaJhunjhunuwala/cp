#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll sum(ll n)
{
    return (n*(n+1))/2;
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    n--;
    ll s=sum(k-1);
    if(s<n) cout<<-1<<endl;
    else{
    ll low=0; ll high=k-1;
    ll count=0;
    while(low<=high)
    {
        ll mid=low+(high-low)/2;
       if(s-sum(mid)>=n) low=mid+1; 
       else high=mid-1;
    }
    cout<<k-1-high<<endl;
    }
    return 0;
}