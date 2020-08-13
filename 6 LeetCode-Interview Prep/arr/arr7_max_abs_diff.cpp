/*  |A[i] – A[j]| + |i – j|  maximize */

int Solution::maxArr(vector<int> &a) {
    // Approach 1 :- will be basic Navie approach
    // Bit mathematical Understand it??
    int n = a.size();
    int max1=INT_MIN,min1=INT_MAX,min2=INT_MAX,max2=INT_MIN;
    for(int i=0;i<n;i++) {
        max1=max(max1,a[i]+i);
        min1=min(min1,a[i]+i);
        max2=max(max2,a[i]-i);
        min2=min(min2,a[i]-i);
    }
    return max(max1-min1,max2-min2);
}

//Application Problem :- Find Min and max with min comparisions