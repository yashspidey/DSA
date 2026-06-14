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
    int pairSum(ListNode* head) {

        vector<int> arr;

        ListNode* temp = head;

        while (temp != NULL) {

            arr.push_back(temp->val);

            temp = temp->next;
        }

        long long maxSum = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            long long sum = 0;

            sum += arr[i] + arr[arr.size() - 1 - i];

            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};