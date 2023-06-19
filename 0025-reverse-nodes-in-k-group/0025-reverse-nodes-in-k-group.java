/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode currentHEad=head;
      int count=0;
      while(count<k){
          if(currentHEad==null){
              return head;
          }
          currentHEad=currentHEad.next;
          count++;
      }
       ListNode reverseHead=reverseKGroup(currentHEad,k);
      while(count>0){
          ListNode next=head.next;
          head.next=reverseHead;
          reverseHead=head;
          head=next;
          count--;
      }
      return  reverseHead;
    
        
    }
}