
#include<iostream>
#include<bits/stdc++.h>

#define pi 3.141592653589793

#define ll long long  

using namespace std;

void soloution()
{
    int size;
    cin>>size;
    vector<int> array(size);
    vector<int>  result(size);
    int sum=0;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
        if((array[i]%2==0))
        {
            result[i]=0;
        }
        else
        {
            result[i]=1;
        }
        sum+=result[i];
    }

    if(sum==size && sum!=0)
    {
        cout<<0<<endl;
    }  
    if(sum==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll t;
   cin>>t;
    while(t--)
    {
       soloution();
    }
    return 0;
}


