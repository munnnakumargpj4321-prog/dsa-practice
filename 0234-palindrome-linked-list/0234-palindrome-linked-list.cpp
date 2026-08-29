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
    bool isPalindrome(ListNode* head) {
        /*make a copy of orignal list deep copy*/
        ListNode* copy=NULL;
        ListNode* tail=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* newnode=new  ListNode(temp->val);
            if(copy==NULL){
                copy=newnode;
                tail=newnode;
            }else{
                tail->next=newnode;
                tail=newnode;
            }
            temp=temp->next;
        }
        /*reverse that copy list */
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=copy;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        /* then compare one by one that is all values are equal or not if not equual then you may return false  and if both reaches NULL then it mean it is eual and then youmay return true */
        ListNode* temp2=head;
        while(temp2!=NULL&&prev!=NULL){
            if(temp2->val!=prev->val)return false;
            temp2=temp2->next;
            prev=prev->next;
        }
        return true;
    }
};