#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main() {
    
    string s,t;
    cin >> s >> t;
    int n=s.size(),m=t.size();
    //cout<<n<<" "<<m<<endl;
    
    long int dp[m+1][n+1];
    for (int i=0;i<=n;i++) dp[0][i]=i+1;
    for (int j=0;j<=m;j++) dp[j][0]=j+1;
    
    for (int i=1;i<=m;i++) {
        for (int j=1;j<=n;j++) {
            dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
            if(s[j-1]!=t[i-1]) dp[i][j]++;
        }
    }
    
    cout<<dp[m][n];
    return 0;
}