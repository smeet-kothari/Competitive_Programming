#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#define pb push_back
#define f first
#define s second
using namespace std;
// U tube Link :-
// problem Link :- https://cses.fi/problemset/task/1640/

int main () {
    int n,x;
    cin >> n >> x;
    int a[n];
    map<int,vector<int>>m;
    for (int i=0;i<n;i++) cin>>a[i],m[a[i]].pb(i+1);
    sort(a,a+n);    //O(nlogn)
    int i=0,j=n-1;
    while(i<j) {
        if(a[i]+a[j]==x) break;
        else if(a[i]+a[j]<x) i++;
        else j--;
    }
    /* to understand STL implementation
    for (auto it: m) {
        cout<<it.f<<" ";
        for(auto i:it.s) cout<<i<<" ";
        cout<<endl;
    }*/
    //Special case
    if(i!=j && a[i]==a[j] && 2*a[i]==x && m[a[i]].size()>1) cout<<m[a[i]][0]<<" "<<m[a[i]][1];
    else if(i!=j && a[i]+a[j]==x) cout<<m[a[i]][0]<<" "<<m[a[j]][0];
    else cout<<"IMPOSSIBLE";
}