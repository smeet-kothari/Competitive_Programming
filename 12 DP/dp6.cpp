#include <iostream>
#include <algorithm>

#include <vector>
#include <map>
#include <set>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <unordered_map>

#include <cmath>    //floor ceil
#include <cstdio>
#include <climits>  //INT_MAX
#include <cstring>  
#include <cstdlib>  //abs
#include <ctime>

#include <string>
#include <bitset>
#include <limits>

#include <fstream>
#include <numeric>
#include <sstream>

using namespace std;

#define mp make_pair
#define pb push_back
#define endl "\n"
#define debug(x) cerr<<#x<<'='<<(x)<<endl;
#define lli long long int
#define ll long long
#define f first
#define s second
#define MOD 1000000007

vector<int>::iterator itv;

lli fast_expo(lli b,lli e)
{
    lli res=1L;
    while(e > 0)
    {
        if(e%2==1) res =(res*b)%MOD;
        b=(b*b)%MOD;
        e /= 2;
    }
    return res % MOD;
}

vector<int>primes;

void isPrime(int n)
{
    vector<bool>p;
    for (int i=0;i<=n;i++) p.pb(true);
    p[0]=0;
    p[1]=0;
    
    for (int i=2;i<=n;i++)
    {
        if(p[i]) {
            primes.pb(i);
            for (int j=2*i;j<=n;j+=i) p[j]=0;
        }
    }
}

int gcd(int s, int k) {
    if(k==0)
        return s;
    else
        return gcd(k, s % k);
}

int main ()
{
    int n,k;
    cin >> n >> k;
    vector<int> w(n),p(n);
    for(int i=0; i<n; i++)cin >> w[i];  //wieght of bag
    for(int i=0; i<n; i++)cin >> p[i];  // price || profit
    vector<int> dp(k+1,0);
    // dp[0]=1;
    for(int i=0; i<n; i++){
        for(int j=k; (j-w[i])>=0; j--){
            dp[j]=max(dp[j],p[i]+dp[j-w[i]]);
        }
    }
    cout << dp[k] << endl;
}