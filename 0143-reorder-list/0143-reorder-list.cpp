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
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL)return ;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            
            count++;
            temp=temp->next;
        }
        int mid=count/2;
        ListNode* temp2=head;
        ListNode* prev2=NULL;
        if(count%2==0){
            for(int i=0;i<mid;i++){
                prev2=temp2;
                temp2=temp2->next;
            }
        }else{
            for(int i=0;i<=mid;i++){
                prev2=temp2;
                temp2=temp2->next;
            }
        }
        prev2->next=NULL;
        ListNode* first=head;
        ListNode* temp3=temp2;
         ListNode* prev=NULL;
        while(temp3!=NULL){
            ListNode* newnode=temp3->next;
            temp3->next=prev;
            prev=temp3;
            temp3=newnode;
        }
        ListNode* temo1=first;
        ListNode* temo2=prev;
       
        while(temo1!=NULL&&temo2!=NULL){
           ListNode* next1 = temo1->next; 
           ListNode* next2 = temo2->next;
            temo1->next = temo2;
            temo2->next = next1;
            temo1 = next1;
            temo2 = next2;
        }        
    }
};