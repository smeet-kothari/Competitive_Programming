//Application of Kadane :- Problem Link 1-->https://www.hackerrank.com/challenges/max-array-sum/problem
int maxSubsetSum(vector<int> arr) {
    if (arr.size()==1) return arr[0];
    int n=arr.size();
    int modified_kadance[n];
    modified_kadance[0]=arr[0];
    modified_kadance[1]=max(modified_kadance[0],arr[1]);
    for (int i=2;i<n;i++) {
        // can be among 3 values..
        // case 1. curr value + kadance [i-2]
        // case 2. kadance[i-1]
        // case3. arr[i]
        modified_kadance[i] = max({modified_kadance[i-2]+arr[i],arr[i],modified_kadance[i-1]});
    }
    int mx=INT_MIN;
    for (int i=0;i<n;i++) mx=max(mx,modified_kadance[i]);
    return mx;
}
//Application Problem Link 2 :- https://codeforces.com/contest/1285/problem/B
string solve() {

}