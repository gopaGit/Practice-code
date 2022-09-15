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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *dummy=new ListNode;
        ListNode *l3= dummy;
        int rem=0;
        while(l1 !=NULL || l2 != NULL || rem){
            int a=0;
            if(l1!=NULL) {
                a=a+(l1->val) ;
                l1=l1->next;
            }
            if(l2!=NULL){
                a=a+ l2->val;
                l2=l2->next;
             }
            a+=rem;
            rem=a/10;
            ListNode *node=new ListNode(a%10);
            l3->next=node ;
            l3=l3->next;
            
        }
    //    l3->val=(l1->val) + (l2->val) +rem ;  
        return dummy->next;
    }
};