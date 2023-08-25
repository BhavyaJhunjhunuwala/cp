#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
       int count=0; // count of zero;
        int l=-1,r=-1;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='1')
            {
                l=i+1;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(str[i]=='1')
            {
                r=i+1;
                break;
            }
        }
        int ans=n;
        if(l!=-1)
        {
            int k=2*(r-l+1);
            k+=2*max(l-1,n-r);
            ans=max(ans,k);
        }
        cout<<ans<<endl;
    }
    return 0;
}