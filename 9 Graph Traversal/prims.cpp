int weighted_sum=0;
int n,m,a,b,w;
cin>>n>>m;
vector<pair<int,int>>adj[n+1];
for (int i=0;i<m;i++) {
cin>>a>>b>>w;
adj[a].pb({b,w});
adj[b].pb({a,w});
}
vector<bool>vis(n+1,false);
vector<Edge>min_e(n);
min_e[1].w=0;
for (int i=1;i<=n;i++) {
int v=-1;
for (int j=1;j<=n;j++) {
if(!vis[j] && (v==-1 || min_e[j].w < min_e[v].w)) {
v=j;
}
if(min_e[v].w == INT_MAX) {
cout<<"No MST!"<<endl;
return 0;
}
vis[v]=true;
weighted_sum+=min_e[v].w;

if(min_e[v].to != -1) {
cout<<v<<" "<<min_e[v].to<<endl;
}

for (int to=1;to<=n;to++) {
//
}