#include <iostream>
#include <algorithm>
using namespace std;

#include <cmath>    //floor ceil
#include <cstdlib>  //abs
#include <cstdio>
#include <climits>  //INT_MAX
#include <cstring>
#define endl "\n"
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define lli long long int
#define MOD 1000000007

#include <vector>
#define pb push_back
vector<int>::iterator itv;
#define ins insert
#include <map>
#define mii map<int,int>
#include <set>
set<int>::iterator its;
#define xx first
#define yy second

#define all(v) v.begin(),v.end()
/*---------------------------------------------------CODE STARTS FROM HERE-------------------------------------*/
struct edge {
    int weight,start,en;
};
struct edge arr[(int)1e5+1];
int parent[(int)1e4+1],ran[(int)1e4+1];

bool comp(struct edge a,struct edge b) {
    if(a.weight<b.weight) return true;
    else return false;
}

int fin(int node) {
    /*while(node!=parent[node]) {
        node=parent[node];
    }*/
    //path compresion
    //cout<<node<<" "<<parent[node]<<endl;
    vector<int> v;
    if(parent[node]==-1) return node;
    while(parent[node]!=-1){
        v.push_back(node);
        node=parent[node];
    }
    for (int i=0;i<v.size();i++) {
        parent[v[i]] = node;
    }
    return node;
}
void unio(int a,int b) {
    if (ran[a] < ran[b])
        swap(a, b);
    parent[b] = a;
    if (ran[a] == ran[b])
        ran[a]++;
}

int main () {
    int tt=1,t;
    //cin >> tt;
    while(tt--) {
        int weighted_sum=0;
        int n,m,a,b,w;
        cin>>n>>m;

        for (int i=1;i<=n;i++) parent[i]=-1,ran[i]=0;
        for (int i=0;i<m;i++) {
            cin>>arr[i].start>>arr[i].en>>arr[i].weight;
        }

        sort(arr,arr+m,comp);
        for (int i=0;i<m;i++) {
            a=fin(arr[i].start);    // parent of a
            b=fin(arr[i].en);      //  parent of b

            if(a!=b) {              // if not connected connect and add sum
                weighted_sum+=arr[i].weight;
                unio(a,b);
            }
        }
        cout<<weighted_sum<<endl;
    }
    return 0;
}