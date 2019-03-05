/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode *head) {
        if (head == NULL)
            return;
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (fast == slow)
            return;
            
        ListNode *tail = NULL;
        ListNode *l1   = head;
        ListNode *l2   = slow->next;
        slow->next = NULL;
        
        l2 = Reverse(l2);
        
        while (l1&&l2) {
            if (tail == NULL)
                head = tail = l1;
            else {
                tail->next = l1;
                tail = tail->next;
            }
            l1 = l1->next;
            
            tail->next = l2;
            tail=tail->next;
            l2 = l2->next;
        }
        
        if (l1)
            tail->next = l1;
    }
    
    ListNode* Reverse(ListNode *head)
    {
        ListNode *newHead = NULL;
        ListNode *curNode = head;
        while (curNode) {
            ListNode *nextNode = curNode->next;
            curNode->next = newHead;
            newHead = curNode;
            curNode = nextNode;
        }
        
        return newHead;
    }
};
