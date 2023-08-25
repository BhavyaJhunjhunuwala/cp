#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin>>str;

    int i;
    if(str[0]=='9')
    {
        i=1;
    }
    else
    {
    i=0;
    }
    for(i; i<str.size(); i++)
    {
        int x=str[i]-'0';
        if(x>9-x)
        {
            x=9-x;
            str[i]=x+'0';
        }
    }
    cout<<str;
    return 0;
}