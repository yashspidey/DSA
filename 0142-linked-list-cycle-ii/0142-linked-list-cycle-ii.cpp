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
    ListNode* detectCycle(ListNode* head) {

        // intuition prove krna pdega mathematically in interviews -

        // calculate how much total distance fast has travelled including the
        // number of times it has circle around the cycle and equate it with
        // twice the distance slow has travelled.     2 (L1 + L2) = L1 + L2 + nk

        if (head == NULL || (head->next == NULL)) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                break;
            }
        }

        if (slow != fast) {
            return NULL;
        }

        ListNode* p = head;

        while (p != slow) {
            p = p->next;
            slow = slow->next;
        }

        return p;
    }
};