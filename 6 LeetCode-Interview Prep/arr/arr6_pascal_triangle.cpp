vector<vector<int>> generate(int n) {
    vector<vector<int>>ans;
    // mathematical notations start with 1 and keep multiplying 11 and digit wise strorage
    // O(n*(n-1))

    // Approach 2:- Binomail Co-effecients normal implementation of nCr is also O(n*r)
    // It's pattern problem I think like Bell or Catalan numbers
    for (int i=0;i<n;i++) {
        vector<int>v;
        for (int j=0;j<i+1;j++) {
            if(j==0 || j==i) v.push_back(1);
            else v.push_back(ans[i-1][j]+ans[i-1][j-1]);
        }
        ans.push_back(v);
    }
    return ans;
}

/* Given a set of n elements, find number of ways of partitioning it.
 {1,2} --> {1,2} { {1} , {2} } .: ans = 2
 {1,2,3} --> {1,2,3} {1, {2,3} } {2, {1,3} } {3, {1,2} } {{1},{2},{3}} .: ans = 5
 */
// Bell Number's Problem :- A number is squarefree if it is not divisible by a perfect square other than 1. For example, 6 is a square free number but 12 is not as it is divisible by 4.
//Given a squarefree number x, find the number of different multiplicative partitions of x

/*int bell_number(int n) {
    // It's pattern problem I think like pascal_number or Catalan numbers
    int a[n][n];
    for (int i=0;i<n;i++) {
        if (i==0) {
            a[i][i]=1;
            continue;
        }
        for (int j=0;j<i+1;j++) {
            if(j==0) a[i][j]=a[i-1][i-1];
            else a[i][j]=a[i][j-1]+a[i-1][j-1];
        }
    }
    return a[n-1][n-1];
}*/