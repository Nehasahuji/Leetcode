//Time Complexity O(n) space complexity O(n)

 public ListNode detectCycle(ListNode head) {
        HashSet<ListNode> set = new HashSet<>();
        while(head!=null){
            if(set.contains(head))
                return head;
            
            set.add(head);
            head=head.next;
        }
        return null;
    }
//Time Complexity O(n) Space complexity O(1)

public ListNode detectCycle(ListNode head) {
      ListNode meet = ListNodeDetectMeet(head);
      ListNode curr =  head;
      if(meet==null)
          return null;
      
      while(curr!=meet){
          curr=curr.next;
          meet=meet.next;
      } 
      return curr;
  }
  
  public ListNode ListNodeDetectMeet(ListNode head){
      ListNode fast=head;
      ListNode slow=head;
      
      while(fast!=null && fast.next!=null)
      {
          fast=fast.next.next;
          slow=slow.next;
         
          if(fast==slow)
              return slow;
    }
      return null;
  }