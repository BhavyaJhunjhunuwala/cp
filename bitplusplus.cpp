#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
        string str[n];
        int result=0;
        for(int i=0; i<n; i++)
        {
            cin>>str[i];

            int found1=str[i].find("+");
            if(found1!=string::npos)
            {
                    if((found1)!=-1)
                    {
                        result++;
                    }
            }
            int found2=str[i].find("-");
            if(found2!=string::npos)
            {
                if((found2)!=-1)
                {
                    result--;
                }
            }
        }
            cout<<result<<endl;
        return 0;
}