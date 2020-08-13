#include<bits/stdc++.h>
using namespace std;

int countsetbits(long int n,int k)
{
    int count=0;
    while(n)
    {
        n &= (n-1);
        count++;
        if(count>k) return 0;
    }
    if(count<=k) 
        return 1;
}

int main()
{
    long long int n,m,k,ans=0;
    cin>>n>>m>>k;
    vector<int>v;
    for (int i=0;i<m+1;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        long int temp=v[m]^v[i];
        ans+=countsetbits(temp,k);
    }
    cout<<ans;
    return 0;
}