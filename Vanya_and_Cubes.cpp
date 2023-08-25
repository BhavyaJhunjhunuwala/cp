#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int i=1;
    if(n==1)
    {
        cout<<1<<endl;
    }
    else{
    while(1)
    {
        int res=i*i*i+3*i*i+2*i;
        if(res>n*6)
        {
            cout<<i-1<<endl;
            break;
        }
        i++;
    }
    }
    return 0;
}