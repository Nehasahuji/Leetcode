 //Three simple steps to find palindron
 1. find middle Linked List
 2. reverse second half of linked list
 3. Compare the element of first Linked List and the second linked list
 
 public boolean isPalindrome(ListNode head) {
       
        ListNode mid = findMiddleNode(head); //Step: 1 find middle node of the Linked list
        
        ListNode reverse = reverseLinkedList(mid); // Step: 2 Reverse the half linked list 
        
        while(reverse!=null){  // Step: 3 compare the element of the next new linked list with the current half linked list
            if(reverse.val!=head.val)
                return false;
            reverse=reverse.next;
            head=head.next;
        }
        return true;
    }
    
    public ListNode findMiddleNode(ListNode head){
        //using two pointers to find the middle element
        ListNode fast = head;
        ListNode slow = head;
        while(fast!=null && fast.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
    
    public ListNode reverseLinkedList(ListNode head){
        //iterative approch to reverse a linked list 
        ListNode prev = null;
         ListNode curr = head;
         while(curr!=null){
             ListNode temp = curr.next;
             curr.next = prev;
             prev = curr;
             curr = temp;
         }
        return prev;
    }