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
    public ListNode removeNthFromEnd(ListNode head, int n) {
       int len=0;
       ListNode temp=head;
        while(temp!=null)
        {
            len++;
            temp=temp.next;
        }
        n=len-n+1;
        if(n>len)
            return head;
        else
        {
            if(n==1)
            {
                temp=head;
                head=head.next;
                temp.next=null;
            }
            else
            {
            int i=1;
            temp=head;
            ListNode prev=null;
            while(i<n)
            {
                prev=temp;
                temp=temp.next;
                i++;
            }
            prev.next=temp.next;
            temp.next=null;
            }
            return head;
        }
    }
}