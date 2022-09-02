 
 //Time Complexity O(n) space complexity O(n)
 public boolean hasCycle(ListNode head) {
        
       HashSet<ListNode> node = new HashSet<>();
        
        while(head!=null){
            if(node.contains(head))
                return true;
            
            node.add(head);
            head=head.next;
                
        }
        
        return false;
    } 


 //Time Complexity O(n) Space complexity O(1)
 public boolean hasCycle(ListNode head) {
        
        ListNode fast = head;
        ListNode slow = head;
        
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
            if(fast==slow)
                return true;
        }
        
        return false;
    }