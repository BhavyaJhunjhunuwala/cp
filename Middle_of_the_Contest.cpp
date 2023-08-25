#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h1,h2,m1,m2,t1,t2,t3,h3,m3;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    t1=h1*60+m1;
    t2=h2*60+m2;
    t3=(t1+t2)/2;
    h3=t3/60;
    m3=t3%60;
    printf("%02d:%02d\n",h3,m3);
    return 0;
}