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
        string str;
        cin>>str;
        int prev=-1;
        int res=0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='1')
            {
                if(prev!=-1)
                {
                    res=res+(i-prev-1);
                }
                prev=i;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}