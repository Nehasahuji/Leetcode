 //   Iterative Solution
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        
        while(curr!=null){
            ListNode temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr=temp;
        }
        
        return prev;
    }
	
//	Recursive Solution
	public ListNode reverseList(ListNode head) {
    
        if(head==null || head.next ==null){
            return head;
        }
        
       ListNode newHead = reverseList(head.next);
        
       ListNode headNext = head.next;
       headNext.next = head;
       head.next=null;
        
       return newHead;
    }