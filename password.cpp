
#include<iostream>
#include<bits/stdc++.h>

#define pi 3.141592653589793

#define ll long long  

using namespace std;

void soloution()
{
      int length;
      cin>>length;
      vector<int> array(length);
      for(int i=0; i<length; i++)
      {
        cin>>array[i];
      }

      cout<<(10-length)*(10-length-1)*3<<endl;
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



