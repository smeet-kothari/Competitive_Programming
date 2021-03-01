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