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
    ListNode* rotateRight(ListNode* head, int k) {
        if( head==NULL||head->next==NULL){
            return head;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* head2=NULL;
        ListNode* temp2=NULL;
        temp=head;
        k = k % count;
        if(k == 0)
        return head;
        int total=count-k;
        for(int i=1;i<=total;i++){
            ListNode* newnode=new ListNode(temp->val);
            if(head2==NULL){
                head2=temp2=newnode;
            }else{
                temp2->next=newnode;
                temp2=newnode;
            }
            temp=temp->next;
        }
       
        ListNode* head3=NULL;
        ListNode* temp3=NULL;
        for(int i=total+1;i<=count;i++){
            ListNode* newnode=new ListNode(temp->val);
            if(head3==NULL){
                head3=temp3=newnode;
            }else{
                temp3->next=newnode;
                temp3=newnode;
            }
            temp=temp->next;
        }
        temp3->next=head2;
        return head3;
    }
};