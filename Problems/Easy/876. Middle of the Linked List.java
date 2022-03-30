//876. Middle of the Linked List
//naive solution
  int count=0;
        ListNode n = head;
        ListNode m=head;
        while(n.next!=null){
            n=n.next;
            count++;
        }
        
        // System.out.println(count);
        
       for(int i=0;i<count/2;i++){
           m=m.next;
       }
        
        if(count%2==0)
            return m;
        else
            return m.next;
    }
}

//efficient solution
 public ListNode middleNode(ListNode head) {
        
        ListNode fast=head;
        ListNode slow=head;
        
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        
        return slow;
    }