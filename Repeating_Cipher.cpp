#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string str;
    cin>>str;
    string ans="";
    int j=1;
    for(int i=0; i<str.length(); i=i+1)
    {
            j=i+1;
            j=(j*(j+1))/2;
            if(j<=str.length())
            {
            ans=ans+str[j-1];
            }
    }
    cout<<ans<<endl;
    return 0;
}