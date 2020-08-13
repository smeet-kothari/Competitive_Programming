#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long int x;
    cin>>x;
    //case 1 x is hypotenous
    long long int c=x,a,b;
    for (b=c-1;b>=1;b++)
    {
        a=c*c-b*b;
        if( ceil(sqrt(a)) == floor(sqrt(a)) )
        {
            cout<<sqrt(a)<<" "<<b;
            return 0;
        }
    }
    a=x;
    // case 2 x is side
    for (int b=1;b<=sqrt(1000000000);b++)
    {
        c=a*a+b*b;
        if( ceil(sqrt(c)) == floor(sqrt(c)) )
        {
            cout<<b<<" "<<sqrt(c);
            return 0;
        }
    }
    cout<<-1;
    return 0;
}