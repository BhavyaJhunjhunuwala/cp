#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        int num=v[i-1];
        int digit=1+log10(num);
        for(int j=1; j<=digit; j++)
        {
            sum+=j;
        }
        int res=((num%10)-1)*10+sum;
        cout<<res<<endl;
        sum=0;
    }
    return 0;
}