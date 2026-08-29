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
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(list1==NULL||list2==NULL){
//             return list1==NULL?list2:list1;
//         }
//        if(list1->val<=list2->val){
//         list1->next=mergeTwoLists(list1->next,list2);
//         return list1;
//        }else{
//         list2->next=mergeTwoLists(list1,list2->next);
//         return list2;
//        }
              
//     }
// };

//==================================================================================================


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* ans=new ListNode();
        ListNode* temp3=ans;
        while(temp1!=NULL&&temp2!=NULL){
            if(temp1->val<temp2->val){
                temp3->next=temp1;
                temp1=temp1->next;
            }else{
                temp3->next=temp2;
                temp2=temp2->next;
            }
            temp3=temp3->next;
        }
        if(temp1!=NULL){
            temp3->next=temp1;
        }else{
            temp3->next=temp2;
        }
        return ans->next;
    }
};