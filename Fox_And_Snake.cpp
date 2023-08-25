#include<bits/stdc++.h>
using namespace std; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int flag=1;
    int k=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i%2!=1)
            {
            cout<<"#";
            }
            else
            {
                if(j==0 && flag==0 && k!=i)
                {
                    cout<<"#";
                    flag=1;
                    k=i;
                }
                else if(j==m-1 && flag==1 && k!=i)
                {
                    cout<<"#";
                    flag=0;
                    k=i;
                }
                else{
                cout<<".";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}