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
        ll n,c;
        cin>>n>>c;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        int low=0, high=v[n-1],best=0,mid;
        while(low<=high)
        {
            mid=(low+high+1)/2;
            int cnt=1,left=0;
            for(int i=1; i<n && cnt<c; i++)
            {
                if(v[i]-v[left]>=mid)
                left=i,cnt++;
            }
        if(cnt>=c){
            best=mid;
            low=mid+1; 
        }
        else{
            high=mid-1;
        }
        }
        cout<<best<<endl;
    }
    return 0;
}