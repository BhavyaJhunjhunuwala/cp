#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int count=0;
        while(a<=n && b<=n)
        {
            if(a>b)
            {
                b+=a;
            }
            else
            {
                a+=b;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}