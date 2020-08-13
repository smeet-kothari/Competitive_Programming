// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0
// https://www.youtube.com/watch?v=5nMGY4VUoRY
#include <iostream>
using namespace std;

int main() {
    // Approach 1:- Sorting if (a[i]==a[i+1]) a[i] is repeating and a[i]+1 is missing
    // Approach 2:- Hashmap Time Complexity :- O(n)
    // Approach 3:- Use math!! Sum and Sum of Squares
    int tt;
    cin >> tt;
    while(tt--) {
        long long int sum =0, sos=0;
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) {
            cin >>a[i];
            sum += a[i];
            sos += (a[i]*a[i]);
        }
        // y is repeating and x is missing.
        int x,y,xmy,x2my2,xpy;
        xmy = (n*(n+1))/2 - sum;
        x2my2 = ( n*(n+1)*(2*n+1) )/6 -sos;
        xpy = x2my2/xmy;
        x = (xpy+xmy)/2;
        y=xpy-x;
        cout<<y<<" "<<x<<endl;
    }
    // Approach 4:-
    return 0;
}