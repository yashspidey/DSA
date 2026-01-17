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

        // intuition asked in interviews -
        // distance between fast and slow pointer is k, so after each iteration
        // this distance will increase by 1 like k, k + 1, k + 2, k + 3.... upto
        // D which is the distance of the loop cycle, then at that point slow
        // and fast pointers will be equal and we can return the answer

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;
            if (fast != NULL && fast == slow) {
                return true;
            }
        }
        return false;
    }
};