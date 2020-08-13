#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n>0)
    {
        int temp=n%2;
        v.push_back(temp);
        n /= 2;
    }
    reverse(v.begin(),v.end());
    for (int i=0;i<v.size();i++) 
    {
        if(v[i]==0) v[i]=4;
        else v[i]=7;
    }
    for (auto i:v)
    {
        cout<<i;
    }
    return 0;
}