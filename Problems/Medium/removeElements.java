203. Remove Linked List Elements
//interative solution
//time complexity O(n);
public ListNode removeElements(ListNode head, int val) {
        
        while(head!=null && head.val==val) head=head.next;
        
        ListNode currNode = head;
        
        while(currNode!=null && currNode.next!=null){
            if(currNode.next.val==val){
                currNode.next=currNode.next.next;
            }else{
                currNode=currNode.next;
            }
        }
        
        return head;
       
    }

//recursive solution
 public ListNode removeElements(ListNode head, int val) {
        if (head == null) return null;
        head.next = removeElements(head.next, val);
        return head.val == val ? head.next : head;
    }