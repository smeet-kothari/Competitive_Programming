/* https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/ */

/* Learnt From https://www.youtube.com/watch?v=-HH_hFIXVVA&list=PL2q4fbVm1Ik6DCzm9XZJbNwyHtHGclcEh&index=7 */

#include<bits/stdc++.h>
using namespace std;

vector<int> arr[1001];
bool vis[1001]={false};
int dis[1001]={0};

void dfs(int node,int d)
{
    vis[node]=true;
    dis[node]=d;

    for (int child: arr[node])
    {
        dfs(child, dis[node]+1);
    }
}

int main ()
{
    /*int t;
    cin>>t;
    while(t--)
    {*/
    int n,x,y;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x>>y , arr[x].push_back(y), arr[y].push_back(x);
    }

    dfs(1,0);
    int q,girl=-1,mi=INT_MAX;
    cin>>q;

    while(q--)
    {
        cin>>x;
        if(dis[x]<mi)
        {
            mi=dis[x];
            girl=x;
        }

        else if(dis[x]== mi && x<girl) girl=x;
    }

    cout<<girl;
        
    //}
    return 0;
}
