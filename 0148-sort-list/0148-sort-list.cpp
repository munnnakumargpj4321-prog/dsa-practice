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
    ListNode* sortList(ListNode* head) {
        vector<int> result;
        ListNode* curr = head;
        while (curr != NULL) {
            result.push_back(curr->val);
            curr = curr->next;
        }
        sort(result.begin(), result.end());
        curr = head;
        int i = 0;
        while (curr != NULL) {
            curr->val = result[i];
            i++;
            curr = curr->next;
        }
        return head;
    }
};