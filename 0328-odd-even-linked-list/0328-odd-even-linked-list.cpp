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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp1=NULL;
        ListNode* temp1head=NULL;
        ListNode* temp2=NULL;
        ListNode* temp2head=NULL;
        ListNode* temp=head;
        int count=1;
        while(temp!=NULL){
            if(count%2!=0){
                if(temp1==NULL){
                    temp1=temp;
                    temp1head=temp1;
                }else{
                    temp1->next=temp;
                    temp1=temp1->next;
                }
            }else{
                if(temp2==NULL){
                    temp2=temp;
                    temp2head=temp2;
                }else{
                    temp2->next=temp;
                    temp2=temp2->next;
                }
                
            }
            count++;
            temp=temp->next;

        }
        temp1->next=temp2head;
        temp2->next=NULL;
        return temp1head;

    }
};