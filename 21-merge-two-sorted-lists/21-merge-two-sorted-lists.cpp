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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    //  ListNode* l3;
   //     if(!l1 || !l2) return l3;
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        
        if(l1->val > l2->val) std::swap(l1,l2);
        
        ListNode* res=l1;
        
        while(l1 != NULL && l2!=NULL ){
            ListNode* tmp=NULL;
            while( l1!=NULL && l1->val <= l2->val){
                tmp=l1;
                l1=l1->next;
            }
            tmp->next=l2;
            std::swap(l1,l2);
            
        }
        return res;
        
        
        
//         //(!l2) return l1;
        
//         if(l1->val<=l2->val){
//             mergeTwoLists(l1->next , l2);
//             return l1;
//         }
//         else {
//             mergeTwoLists(l1,l2->next);
//             return l2;
//         }
        
//         while(l1->next!=nullptr && l2->next!=nullptr){
//             if(l1->val <= l2->val){
//                 l3->val=l1->val;
//                 l1=l1->next;
//                 l3=l3->next;
//             }
//             else {
//                 l3->val=l2->val;
//                 l2=l2->next;
//                 l3=l3->next;
//             }
//         }
//         if(! l1->next) {
//             l3->next=l2;
//         }
//         l3->next=l1;
        
//         l3->next=nullptr;
    }
};