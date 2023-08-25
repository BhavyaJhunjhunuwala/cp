#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> val(n);
    for(int i=0; i<n; i++)
    {
        cin>>val[i];
    }
    long long int sum=val[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(val[i]<val[i+1])
        {
            sum+=val[i];
        }
        else
        {
            int a=val[i+1]-1;
            if(a>=1)
            {
                val[i]=a;
                sum+=a;
            }
            if(a<=0)
            {
                val[i]=0;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}