#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        int row,col;
        cin>>row>>col;
        char str[row][col];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>str[i][j];
            }
        }
        int ans=0;
        int k=0;
        int p=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(str[i][j]=='R')
                {
                    k=j;
                    k++;
                    if(k<0 || k>col-1)
                    {
                        ans++;
                    }
                }
                if(str[i][j]=='D')
                {
                    p=i;
                    p++;
                    if(p<0 || p>row-1)
                    {
                        ans++;
                    }
                }
                if(str[i][j]=='C')
                {
                    cout<<ans<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}