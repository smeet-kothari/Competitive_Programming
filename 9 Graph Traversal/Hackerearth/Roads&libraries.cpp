
// accu 33%
// minimal mistake :https://www.youtube.com/watch?v=NBEYvk945Bw
bool vis[100001];
long ans=0;

int DFS(vector<int>G[],int c_r,int node) {
    vis[node]=true;
    int comp_size=1;
    for(auto child: G[node]) {
        if(!vis[child]) {
            comp_size+=DFS(G,c_r,child);
        }
    }
    return comp_size;
}

long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {
    //if((n-1)*c_road>=n*c_lib) return n*c_lib;
    ans=0;
    memset(vis,false,n+1);
    vector<int>G[n+1];
    for (int i=0;i<cities.size();i++) {
        G[cities[i][0]].push_back(cities[i][1]);
        G[cities[i][1]].push_back(cities[i][0]);
    }
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            int comp_size=DFS(G,c_road,i);
            ans += min((comp_size-1)*c_road+c_lib,comp_size*c_lib);
        }
    }
    return ans;
}