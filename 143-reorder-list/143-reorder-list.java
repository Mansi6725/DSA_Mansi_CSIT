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
    public void reorderList(ListNode head) {
        myScan(head,head);
    }
    public ListNode myScan(ListNode slow, ListNode fast) {
if(fast == null) {
return slow;
}
if(fast.next == null){
ListNode tmp = slow.next;
slow.next = null;
return tmp;
}
ListNode lead = myScan(slow.next, fast.next.next);
ListNode tmp = lead.next;
if(lead == slow.next) {
slow.next.next = null;
} else {
lead.next = slow.next;
slow.next = lead;
}
return tmp;
}
}