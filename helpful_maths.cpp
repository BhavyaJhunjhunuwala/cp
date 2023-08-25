#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string str;
    cin>>str;
    int size=str.length()-str.length()/2;
    vector<int> v;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!='+')
        {
            string help;
            help=str[i];
            v.push_back(stoi(help));
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(i==v.size()-1)
        {
            cout<<v[i];
        }
        else
        {
        cout<<v[i]<<"+";
        }
    }
    return 0;
}