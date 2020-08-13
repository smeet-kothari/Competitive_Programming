#include<bits/stdc++.h>
using namespace std;

int tree[200000];
int a[100000];

void bst(int start,int end,int treenode)
{
    
    if(start==end)  //base case
    {
        tree[treenode]=a[start];
        return;
    }
    
    int mid=(start+end)/2;
    bst(start,mid,2*treenode);
    bst(mid+1,end,2*treenode+1);
    
    tree[treenode]=tree[2*treenode] ^ tree[2*treenode+1];
}
void update()
{
    
}

int main()
{
    int n,q;
    cin>>n>>q;
    
    for (int i=0;i<n;i++) cin>>a[i];
    
    bst(0,n-1,1);
    
    for (int i=1;i<2*n-1;i++) cout<<tree[i]<<" ";
    /*while(q--)
    {
        long long int o,a,b,val;
        cin>>o>>a>>b>>;
        if(o<4) 
        {
            cin>>val;
            
        }
        if(o==4) for (int i=a;i<=b;i++) cout<<tree[i][3]<<" ";
        else if(o==5) for (int i=a;i<=b;i++) cout<<tree[i][2]<<" ";
        cout<<endl;
        
    }*/
    return 0;
}