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
    //  ListNode* temp=head;
    //  int count=0;
    //  while(temp!=NULL){
    //     count++;
    //     temp=temp->next;
    //  }   
    //  int ans=count/2+1;
    //  ListNode* final=head;
    //  int i=0;
    //  while(i<ans-1){
    //     final=final->next;
    //     i++;
    //  }
    //  return final;
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
    }
};