// Problem Link:-
// Utube Back to Back SWE
int maxSubArray(vector<int>& nums) {
    int kadance[nums.size()];
    kadance[0]=nums[0];
    for (int i=1;i<nums.size();i++)
    {
        kadance[i]=max(nums[i],kadance[i-1]+nums[i]);
    }
    long int max=kadance[0];
    for (int i=1;i<nums.size();i++)
    {
        if(kadance[i]>max) max=kadance[i];
    }
    return max;
}
