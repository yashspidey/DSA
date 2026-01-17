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
    bool hasCycle(ListNode* head) {
        // Floyd Cycle Detection Algorithm

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
           
            slow = slow->next;
            fast = fast->next->next; if (fast != NULL && fast == slow) {
                return true;
            }
        }
        return false;
    }
};