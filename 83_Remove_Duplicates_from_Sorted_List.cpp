/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL) return head;
        
//         int temp=head->val;
//         ListNode* cur=head->next;
//         ListNode** pp=&(head->next);
        
//         while(cur!=NULL){
//             if(cur->val==temp){
//                 *pp=cur->next;
                
//             }
//             else{
//                 pp=&(cur->next);
//                 temp=cur->val;
//             }
//             cur=cur->next;
//         }
        
//         return head;
//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur=head;
        
        while(cur!=NULL&&cur->next!=NULL){
            if(cur->val==cur->next->val) cur->next=cur->next->next;
            else cur=cur->next;
        }
        
        return head;
    }
};
