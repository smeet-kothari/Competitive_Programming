#include<bits/stdc++.h>
using namespace std;

vector<int>v;

long long int ss(int n)
{
    vector<int>binary;
    while(n>0)
    {
        int temp=n%2;
        v.push_back(temp);
        n /= 2;
    }
    reverse(binary.begin(),binary.end());
    long long int sum=0;
    for (int i=binary.size()-1;i>=0;i--)
    {
        if(binary[i]=='1') sum += v[i];
    }
    return sum;
}

void cs()
{
    int n=v.size(),f=1;
    for (int i=1;i<=pow(2,n-1);i++)
    {
        if(ss(i)==ss(n-i)) 
        {
            cout<<"YES";
            f=0;
            break;
        }
    }
    if(f) cout<<"NO";
}

int main()
{
    long long int n,sum=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    if(sum%360==0) cout<<"YES";
    else
    {
        cs();
    }
    return 0;
}