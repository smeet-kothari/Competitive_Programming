// Problem Link :- https://leetcode.com/problems/find-the-duplicate-number/
// Learning Link Link :- https://www.youtube.com/watch?v=32Ll35mhWg0

int findDuplicate(vector<int>& nums) {
    // Approach 1:- Sorting in O(nlogn) and then O(n) for checking a[i] & a[i+1]
    // But you are not allowed to modify the array

    // Approach 2:-We can Use HashMap and keeping counting freqeuncy !!but only Constant Space
    // It can be even repeated more than once so can't go for XOR too.

    // So here is Tortoise method for you.
    // Mthematical Proof...
    int f_p=nums[0],s_p=nums[0],n=nums.size();
    do {
        s_p = nums[s_p];
        f_p = nums[nums[f_p]];
    }while( s_p != f_p );
    f_p=nums[0];
    while(s_p != f_p) {
        s_p = nums[s_p];
        f_p = nums[f_p];
    }
    return s_p;
}