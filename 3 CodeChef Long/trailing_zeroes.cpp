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
#define MOD 1000000007

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
    /*int tt;
    cin >> tt;
    while(tt--)
    {
        /*
        lli ans;
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        string s;
        cin >>s;
        
    }*/
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if((a+b)%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}