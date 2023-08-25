#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int mat[5][5];
    int row,col;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                row=i+1;
                col=j+1;
            }
        }
    }
    int ans=abs(row-3)+ abs(col-3);
    cout<<ans<<endl;
    return 0;
}