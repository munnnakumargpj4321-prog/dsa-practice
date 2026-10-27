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
    ListNode* partition(ListNode* head,int x){
        if(head==NULL)return NULL;
        ListNode* head2=NULL;
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            // ListNode* next=temp->next;
            if(temp->val<x) {
                ListNode* newnode=new ListNode(temp->val);
                if (head2==NULL){
                    head2=prev=newnode;
                }else{
                    prev->next=newnode;
                    prev=newnode;
                }
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->val>=x){
                ListNode* newnode=new ListNode(temp->val);
                if(head2==NULL){
                    head2=prev=newnode;
                }else{
                    prev->next=newnode;
                    prev=newnode;
                }
            }
            temp=temp->next;
        }
        return head2;
    }
};

