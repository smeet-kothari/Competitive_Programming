//https://www.youtube.com/watch?v=hVl2b3bLzBw
//Approach 1 :- combine and then apply merge_sort algo
// Approach 2:- Choose smaller array for insertion sort and larger one for swapping
/* if(arr1[pointer]>arr2[pointer])
 * swap them
 * insertion_sort(arr2)
 * --> Expertise Merge Sort */
//Approach 3:- Gap Algo
/*
 * Bit difficult to implement. */
// Approach 4:- Using Heaps
//https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/
//https://leetcode.com/problems/merge-k-sorted-lists/
// Using min heap can be done for Linked List easily
/* struct compare {
    bool operator()(struct Node* a, struct Node* b)
    {
        return a->data > b->data;
    }
};
priority_queue<Node*, vector<Node*>, compare> pq;
 */
