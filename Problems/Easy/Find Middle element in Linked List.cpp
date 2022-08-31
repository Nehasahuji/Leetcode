 Using Two Iterations
 Time Complexity will be O(N) and Space Complexity will be O(1).
 public ListNode middleNode(ListNode head) {
        int count=0;
        ListNode n = head;
        ListNode newNode = head;
        while(n!=null)
        {
            n=n.next;
            count++;
        }
        
        for(int i=0;i<count/2;i++){
            newNode = newNode.next;
        }
       
        return newNode;    
    }
 
 

 
 Time Complexity will be O(N) and Space Complexity will be O(1).	
 public ListNode middleNode(ListNode head) {
        ListNode slow=head;
        ListNode fast=head;
        
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        
        return slow;
        
    }