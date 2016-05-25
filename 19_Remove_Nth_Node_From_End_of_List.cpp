/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//保存上一个节点
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode *first,*last;
        
//         first=head;
//         //current=head;
//         last=head;
        
//         for(int i=1;i<n;i++){
//             last=last->next;
//         }
        
//         if(last->next==NULL){
//             head=head->next;
//             return head;
//         }
        
//         //current=current->next;
//         last=last->next;
        
//         while(last->next!=NULL){
//             first=first->next;
//             //current=current->next;
//             last=last->next;
//         }
        
//         first->next=(first->next)->next;
        
//         return head;
//     }
// };

//使用二级指针，保存上一个节点的next指针
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode **pp=&head,*p=head;
        
        for(int i=1;i<n;i++){
            p=p->next;
        }
        
        while(p->next!=NULL){
            pp=&((*pp)->next);
            //current=current->next;
            p=p->next;
        }
        *pp=(*pp)->next;
        
        return head;
    }
};
