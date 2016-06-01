/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ptr1=l1,*ptr2=l2;
        ListNode dummy(0);
        ListNode *ptr3=&dummy;
        
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val < ptr2->val){
                ptr3->next=ptr1;
                ptr1=ptr1->next;
            }
            else{
                ptr3->next=ptr2;
                ptr2=ptr2->next;
            }
            ptr3=ptr3->next;
        }
        ptr3->next=ptr1?ptr1:ptr2;
        
        return dummy.next;
    }
};
// /*使用递归
//   空间复杂度为O(l1长度+l2长度)
//   若长度过大，则堆栈溢出
// */
// class Solution {
// public:
//     ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
//         if(l1 == NULL) return l2;
//         if(l2 == NULL) return l1;

//         if(l1->val < l2->val) {
//             l1->next = mergeTwoLists(l1->next, l2);
//             return l1;
//         }
//         else {
//             l2->next = mergeTwoLists(l2->next, l1);
//             return l2;
//         }
//     }
// };
