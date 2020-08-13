#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,k;
    cin>>n>>m>>k;
    vector<int> f[n],b[n];
    int ans[n]={0};
    for (int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        f[x-1].push_back(y);
        f[y-1].push_back(x);
    }
    for (int i=0;i<k;i++)
    {
        int x,y;
        cin>>x>>y;
        b[x-1].push_back(y);
        b[y-1].push_back(x);
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1+1;j<=n;j++)
        {
            it = std::find (f[i].begin(), f[i].end(),j);
            it1 = std::find (b[i].begin(), b[i].end(),j);
            if(it == f[i].end() && it1 == b[i].end())
            {
                int flag=1;
                for (int k=i;k<j;k++)
                {
                    it2 = std::find (f[k].begin(), f[k].end(),k+1);   
                    if (it2 != f[k].end()) k++;
                    else flag=0;
                }
                if(flag) 
                {
                    ans[i]++;
                    ans[j]++;
                }
            }
        }
    }
    for (int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;
}
/*for (int i=0;i<n;i++)
    {
        if(!(b[i].empty()))
            {
            for (int j=0;j<f[i].size();j++)
            {
                cout<<b[i][j]<<" ";
            }
        }
        cout<<endl;
    }*/