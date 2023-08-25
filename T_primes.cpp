#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        if(a==1) cout<<"NO";
        else{
        ll low=2,high=a-1,mid;
        ll count=2;
        while(high-low>=1)
        {
            mid=(low+high)/2;
            if(a/mid>0)
            {
                high=mid-1;
                if(a%mid==0)count++;
                if(a%low==0)count++;
            }else{
                low=mid;
            }
        }
        if(count==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
    return 0;
}