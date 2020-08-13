#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m;
    cin>>n>>m;
    string a[n],b[m];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<m;i++) cin>>b[i];
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        string res;
        if(x%n==0) res=a[n-1];
        else res=a[(x%n)-1];
        if(x%m==0) res += b[m-1];
        else res += b[(x%m)-1];
        cout<<res<<endl;
    }
    return 0;
}
