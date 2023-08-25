#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    string str1="",ans="";
    for(int i=0; i<str.length(); i++)
    {
        str1+=tolower(str[i]);
    }
    for(int i=0; i<str1.length(); i++)
    {
        if(str1[i]=='a' || str1[i]=='o' || str1[i]=='y' || str1[i]=='e' || str1[i]=='u' || str1[i]=='i')
        {
           ans=ans;
        }
        else{
             ans=ans+'.'+str1[i];
        }
    }
    cout<<ans<<endl;
    
    return 0;
}