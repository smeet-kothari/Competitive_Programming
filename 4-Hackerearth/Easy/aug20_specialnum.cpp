//Based on bitmasking + ETF = 2000 level codeforces D of Edu
// Problem Link --> https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/happy-numbers-4a67748e/

/* How to get Specialnumbers
 * 0 --> 4
 * 1 --> 7
 * 00 --> 44
 * 01 --> 47
 * 11 --> 77
 * 10 --> 74
 * observe pattern
 */

//Let first Understand ETF denoted by phi

/* phi(n) is number of integers form 1 to n-1 which are co-prime with n.
 * co-prime --> gcd(i,n)==1
 * for any prime p phi(p)=p-1 lets say it's result 1
 * for any p^x phi(p^x) = p^x - num which are not coprime with P
 * ie is p^x/p = p^(x-1)
 * so result 2 is phi(p^x)=p^(x-1)(p-1)
 * res 3 is phi(n*m) =phi(n)*phi(m)
 * N = p1^x1...
 * div(N) = (x1+1)...
 * phi(N) = phi(p1^x1)... from res 3
 *        = p1^(x-1) * (p1-1) from res 2
 *        = p1^x1 * (p1-1)/p1 multiplying while equation p1,p2 and dividing the same
 *        = N ( (p1-1)/p1 * (p2-1)/p2...)
 * */

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define lli long long int
vector<int>nums;

void special_number(int n)
{
    for (int i=2; ;i++) {
        lli sum=0;
        int c=1;
        while(i>0)
        {
            int temp=i%2;
            if(temp) sum += 7*pow(10,c-1);
            else sum += 4*pow(10,c-1);
            i /= 2;
            c++;
        }
        if(sum>=n) break;
        else nums.pb(sum);
    }
    return;
}

int phi(int n) {
    int res =n;
    for (int i=2;i<=n;i++) {
        res *= (i-1);
        res /= i;
        while(!(n%i)) {
            n /= i;
        }
    }
    if(n>1) {
        res *= (n-1);
        res /= n;
    }
    return res;
}

int main() {
    nums.pb(4);
    nums.pb(7);
    special_number(77);
    for (int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
    return 0;
}