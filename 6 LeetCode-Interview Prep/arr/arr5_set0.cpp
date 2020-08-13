//Problem Link :- https://leetcode.com/problems/set-matrix-zeroes/
// Utube Link :-

void setZeroes(vector<vector<int>>& matrix) {
    int n=matrix.size(),m=matrix[0].size();
    /* Approach 1
      int r[n] ={0},c[m] = {0};   // Space Complexity of O(m+n)
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if(matrix[i][j]==0) r[i]=1,c[j]=1;
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if(r[i] || c[j]) matrix[i][j]=0;
        }
    }*/
    //Using Constant Space..
}

