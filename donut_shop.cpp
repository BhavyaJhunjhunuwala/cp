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
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a<c)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
        if(c<a*b)
        {
            cout<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}