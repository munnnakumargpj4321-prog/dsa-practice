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
    ListNode* deleteMiddle(ListNode* head) {
        if( head==NULL)return NULL;
        if(head->next==NULL)return NULL;
        if(head->next->next==NULL){
            delete head->next;
            head->next=NULL;
            return head;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
       
        int total=count/2;
        count=0;
        temp=head;
        while(count!=total){
            count++;
            if(count==total)break;
            temp=temp->next;
        }

        ListNode* temp2=temp->next;
        temp->next=temp2->next;
        delete temp2;
        return head;

    }
};