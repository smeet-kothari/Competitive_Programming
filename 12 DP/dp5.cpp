#include <iostream>
#define MOD 1000000007
using namespace std;

int main() {
    
    int n;
    cin >> n;
    char a[n][n];
    long long dp[n][n]={0};
    
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
           cin >> a[i][j];
           if(a[i][j]=='*') dp[i][j]=-1;
        }
    }
    
    if(a[0][0]=='*' || a[n-1][n-1]=='*') {
        cout<<0;
        return 0;
    }
    
    else {
        int tr=1,lc=1;
        for (int i=0;i<n;i++) {
           if(a[0][i]=='*') tr=0;
           if(a[i][0]=='*') lc=0;
           dp[i][0]=lc;
           dp[0][i]=tr;
        }
        
        for (int i=1;i<n;i++) {
            for (int j=1;j<n;j++) {
                if(a[i][j]=='*') continue;
                if(dp[i-1][j]!=-1) dp[i][j]=(dp[i-1][j])%MOD;
                if(dp[i][j-1]!=-1) dp[i][j] =(dp[i][j] + dp[i][j-1])%MOD;
            }
        }
        
        cout<<dp[n-1][n-1];
        return 0;
    }
}