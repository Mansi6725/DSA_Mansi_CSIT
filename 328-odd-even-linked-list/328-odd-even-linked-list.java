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
    public ListNode oddEvenList(ListNode head) {
       if(head==null||head.next==null||head.next.next==null)
           return head;
        ListNode lol=head;
        ListNode fel=head.next;
        ListNode lel=head.next;
        ListNode c=head.next.next;
       int f=1;
        while(c!=null)
        {
            if(f%2==0)
            {
                lel.next=c;
                lel=c;
            }
            else{
                lol.next=c;
                lol=c;
            }
            c=c.next;
            f++;
        }
        lol.next=fel;
        lel.next=null;
        return head;
    }
}