int h,w;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

char a[999][999];

queue<pair<int,int>>q;

bool isvalid(int i,int j) {
    if(i<0 || i>=h || j<0 || j>=w) return 0;
    else return 1;
}

void bfs(int i,int j,int dis[][w],bool vis[][w]) {
    vis[i][j]=1;
    dis[i][j]=0;
    q.push({i,j});
    while(!q.empty()) {
        pair<int,int>p=q.front();
        int curi=p.f,curj=p.s;
        for (int k=0;k<4;k++) {
            if(isvalid(curi+dx[k],curj+dy[k]) && a[curi+dx[k]][curj+dy[k]]!='#' && !vis[curi+dx[k]][curj+dy[k]]){
                dis[curi+dx[k]][curj+dy[k]]=dis[curi][curj]+1;
                vis[curi+dx[k]][curj+dy[k]]=1;
                q.push({curi+dx[k],curj+dy[k]});
            }
        }
    }
}