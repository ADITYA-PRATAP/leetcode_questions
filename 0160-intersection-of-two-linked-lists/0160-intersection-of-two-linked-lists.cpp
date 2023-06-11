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
    
    int length(ListNode *head){
        ListNode *temp=head;
        int length=0;
        
        while(temp!=NULL){
            temp=temp->next;
            length++;
        }
        return length;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int headAlength=length(headA),headBlength=length(headB);
        
        while(headAlength > headBlength){
           headA=headA->next;
            headAlength--;
        }
        
        while(headAlength < headBlength){
            headB=headB->next;
            headBlength--;
        }
        
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
            
        }
       
        
        return headA;
        
        
    }
};