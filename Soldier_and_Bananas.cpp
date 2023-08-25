#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n,w;
    cin>>k>>n>>w;
    int res=(w*(w+1))/2;
    res=k*res;
    if(res>n)
    {
        cout<<res-n<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}