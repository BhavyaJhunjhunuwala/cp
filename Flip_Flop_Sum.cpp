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
        vector<int> v(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        int flag=0;
        for(int i=0; i<n-1; i=i+1)
        {
            if(v[i]==-1 && v[i+1]==-1)
            {
                v[i]=1;
                v[i+1]=1;
                flag=1;
                break;   
            }
        }
        int ans=0;
        if(flag)
        {   
            for(int i=0; i<n; i++)
            {
                ans+=v[i];
            }
        }
        else if(sum==n)
        {
            v[0]=-1;
            v[1]=-1;
             for(int i=0; i<n; i++)
            {
                ans+=v[i];
            } 
        }
        else{
            for(int i=0; i<n-1; i++)
            {
                if((v[i]==-1 && v[i+1]==1) || (v[i]==1 && v[i+1]==-1))
                {
                v[i]=v[i]*-1;
                v[i+1]=v[i+1]*-1;
                break;   
                }
            }
            for(int i=0; i<n; i++)
            {
                ans+=v[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}