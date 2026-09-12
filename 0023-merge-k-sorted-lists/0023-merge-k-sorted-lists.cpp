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
     ListNode* mergeTwo(ListNode* ans, ListNode* lists){
        ListNode dummy(0);
        ListNode* temp=&dummy;
        while(ans!=NULL&&lists!=NULL){
            if(ans->val<=lists->val){
                temp->next=ans;
                ans=ans->next;
            }else{
                temp->next=lists;
                lists=lists->next;
            }
            temp=temp->next;
        }
        if(ans!=NULL){
            temp->next=ans;
        }else{
            temp->next=lists;
        }
        return dummy.next;
     }
    ListNode* mergeKLists(vector<ListNode*>&lists){
       ListNode* ans=NULL; 
       for(int i=0;i<lists.size();i++){
        ans = mergeTwo(ans, lists[i]);
       }
       return ans;  
    

    }
};