// Problem Link :- https://leetcode.com/problems/sort-colors/
// Learn Link :- https://www.youtube.com/watch?v=oaVa-9wmpns

void sortColors(vector<int>& nums) {
    // Approach 1:- Counting Sort O(n)
    // Approach 2:- Sorting nlogn
    int low=0,mid=0,high=nums.size()-1;     //dutch national flag algo
    //failing [1,2,0]
    while (mid<=high) {
        switch(nums[mid]) {
            case 0:
                swap(nums[low],nums[mid]);
                low++;
                break;
            case 2:
                swap(nums[high],nums[mid]);
                high--;
                break;
            case 1:
                break;
        }
        mid++;
    }
}


