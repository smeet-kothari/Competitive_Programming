/* https://leetcode.com/problems/delete-node-in-a-linked-list */

/* https://www.youtube.com/watch?v=icnp4FJdZ_c&list=PLgUwDviBIf0r47RKH7fdWN54AbWFgGuii&index=5 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
        public:
        void deleteNode(ListNode* node) {
            node->val=node->next->val;
            node->next=node->next->next;
            //delete(node->next);
        }
};