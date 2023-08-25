#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str,res="";
    cin>>str;
    res=str;
    reverse(str.begin(),str.end());
    res+=str;
    cout<<res;
    return 0;
}