/*
 
 Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 */

class Solution {
	public:
		ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		  if (headA == headB)
				return headA;
			if (!headA || !headB)
				return NULL;
			
			ListNode *curA = headA;
			ListNode *curB = headB;

			while (curA && curB) {
				curA = curA->next;
				curB = curB->next;
			}

			ListNode *longList  = NULL;
			ListNode *shortList = NULL;
			int diff = 0;
			
			if (curA) {
			    longList  = headA;
					shortList = headB;
					while (curA) {
					  diff++;
						curA = curA->next;
					}
			} 
			else {
			    longList  = headB;
					shortList = headA;
			    while (curB) {
					  diff++;
						curB = curB->next;
					}
			
			} 
			

			while (diff--) {
			  longList = longList->next;
			}

			while (longList && shortList) {
			    if (longList == shortList)
						return longList;
					longList  = longList->next;
					shortList = shortList->next;
			}
			
			return NULL;
		}
};

