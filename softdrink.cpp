#include<bits/stdc++.h>

using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int result=min((k*l)/nl,(c*d));
    result=min(result,p/np);
    result=result/n;
    cout<<result<<endl;
    return 0;
}