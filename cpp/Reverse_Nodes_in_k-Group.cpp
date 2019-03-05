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
    ListNode *reverseKGroup(ListNode *head, int k) {
        if (head == NULL) return NULL;
        ListNode *nextKth = head;
        ListNode *tail = NULL;
        ListNode *curNode = nextKth;
        while (nextKth != NULL) {
            
            int i=0; 
            while (i<k && nextKth) {
                ++i;
                nextKth = nextKth->next; 
            }
            if (i==k) {
                ListNode *reHead = NULL;
                ListNode *reTail = curNode;
                while (curNode != nextKth) {
                    ListNode *nextNode = curNode->next;
                    curNode->next = reHead;
                    reHead = curNode;
                    curNode = nextNode;
                }
                if (tail == NULL)
                    head = reHead;
                else 
                    tail->next = reHead;
                tail = reTail;
            } else{
                if(tail!=NULL)
                    tail->next = curNode;
            }
        }
        
        return head;
        
    }
};
