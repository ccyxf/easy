/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//递归
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
        
//         ListNode *first=head;
//         ListNode *second=first->next;
        
//         first->next=swapPairs(second->next);
//         second->next=first;
 
//         return second;
//     }
// };
//二级指针
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        ListNode **pp=&head,*first,*second;
        
        while((first=*pp) && (second=first->next)){
            first->next=second->next;
            second->next=first;
            *pp=second;
            pp=&(first->next);
        }
        
        return head;
    }
};
