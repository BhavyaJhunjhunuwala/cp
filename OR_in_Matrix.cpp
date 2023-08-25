#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n;
    cin>>m>>n;
   vector<vector<int>> a (m,vector<int>(n,1));
   vector<vector<int>> b (m,vector<int>(n,0));
   for(int i=0; i<m; i++)
   {
    for(int j=0; j<n; j++)
    {
        cin>>b[i][j];
        if(b[i][j]==0)
        {
            for(int k=0; k<n; k++)
            {
                a[i][k]=0;
            }
            for(int k=0; k<m; k++)
            {
                a[k][j]=0;
            }
        }
    }
   }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j]==1)
            {
                int sum=0;
                for(int k=0; k<m; k++)
                {
                    sum+=a[k][j];
                }
                for(int k=0; k<n; k++)
                {
                    sum+=a[i][k];
                }
                if(sum==0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
;        }
    } 
    cout<<"YES"<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   

    return 0;
}