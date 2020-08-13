#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,x,flag=1;
    cin>>a>>b;
    for (x=1;x<1251;x++)
    {
        if(floor(x*0.08)==a && floor(x*0.1)==b)
        {
            flag=0;
            cout<<x;
            break;
        }
    }
    if(flag==1) cout<<-1;
    return 0;
}