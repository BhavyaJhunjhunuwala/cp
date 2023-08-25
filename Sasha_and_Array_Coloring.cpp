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
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll low=0;
        ll high=n-1;
        ll sum=0;
        while(low<=high)
        {
            sum+=v[high]-v[low];
            high--;
            low++;
        }
        cout<<sum<<endl;
    }
    return 0;
}