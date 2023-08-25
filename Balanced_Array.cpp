#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> ans;
        ll lsum=0;
        ll rsum=0;
        ll hf=n/2;
        if((n/2)%2==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++)
            {
                ans.push_back(2*(i+1));
            }
            lsum=hf*(hf+1);
            for(int i=0; i<n/2-1; i++)
            {
                ans.push_back(1+(i)*2);
                rsum+=ans[i+n/2];
            }
            ans.push_back(lsum-rsum);
            for(int i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}