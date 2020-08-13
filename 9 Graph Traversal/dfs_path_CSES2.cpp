#include<iostream>
#include<vector>
#include<algorithm>
#define pb push_back

using namespace std;
bool vis[1001][1001]={false};
char a[1001][1001];
vector<string>ans;
string t="";

bool isvalid(int i,int j,int n,int m) {
    if(i>=0 && i<n && j>=0 && j<m) return 1;
    else return 0;
}

bool dfs (int x,int y,int n,int m) {
    vis[x][y]=1;
    int dx[]={1,-1,0,0};    //row+1=D row-1=U col+1=R col-1=L
    int dy[]={0,0,1,-1};
    for (int i=0;i<4;i++) {
        if(isvalid(x+dx[i],y+dy[i],n,m) && !vis[x+dx[i]][y+dy[i]] && a[x+dx[i]][y+dy[i]]=='B') return true;

        else if(isvalid(x+dx[i],y+dy[i],n,m) && !vis[x+dx[i]][y+dy[i]] && a[x+dx[i]][y+dy[i]]=='.') {
            if(dx[i]+dy[i]==1 && dx[i]==1) t+='D';
            else if(dx[i]+dy[i]==-1 && dx[i]==-1) t+='U';
            else if(dx[i]+dy[i]==1 && dy[i]==1) t+='R';
            else if(dx[i]+dy[i]==-1 && dy[i]==-1) t+='L';

            if(dfs(x+dx[i],y+dy[i],n,m)) {
                ans.pb(t);
                return true;
            }
            t.erase(t.size()-1);
        }
    }
    return false;
}

int main() {
    int n, m,x_start,y_start;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'A') x_start = i,y_start = j;
        }
    }
    bool b=dfs(x_start,y_start,n,m);
    if(b) {
        sort(ans.begin(), ans.end());
        cout << ans[0].size() << endl;
        cout << ans[0] << endl;
    }
    return 0;
}