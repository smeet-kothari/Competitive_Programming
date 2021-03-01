/* https://leetcode.com/problems/middle-of-the-linked-list/ */

/* https://www.youtube.com/watch?v=sGdwSH8RK-o&list=PLgUwDviBIf0r47RKH7fdWN54AbWFgGuii&index=3 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head,*slow=head;
        while(fast!=NULL) {
            slow=slow->next;
            if(fast->next->next!=NULL)fast=fast->next->next;
            else fast=NULL;
        }
        return slow;
    }
};