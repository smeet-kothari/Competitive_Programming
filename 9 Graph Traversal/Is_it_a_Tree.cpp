/* https://www.spoj.com/problems/PT07Y/ */
/* Learnt From https://www.youtube.com/watch?v=EYLiRbXu3kc&list=PL2q4fbVm1Ik6DCzm9XZJbNwyHtHGclcEh&index=8*/

#include<bits/stdc++.h>
using namespace std;

vector<int> arr[10001];
bool vis[10001]={ false };

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
	
	    if (count!=1 && e!=n-1) cout<<"NO";
	    else cout<<"YES";
    
    return 0;
}
