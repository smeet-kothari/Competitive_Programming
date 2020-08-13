/* https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/ */
/* Learnt From Code NCode channel */

#include<bits/stdc++.h>
using namespace std;

vector<int> arr[100001];
bool vis[100001]={ false };

void dfs(int node)
{
    vis[node]=1;
    for (int child: arr[node])
    {
        if( vis[child] == false )
        {
            dfs(child);
        }
    }
}

int main ()
{
    int n,e,x,y,count=0;
    cin>>n>>e;
    while(e--)
    {
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    for (int i=1;i<=n;i++)
    {
        if( vis[i] == false )
        {
            count++;
            dfs(i);
        }
    }

    cout<<count;

    return 0;
}
