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
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL)
            return NULL;
        ListNode *pFast = head;
        ListNode *pSlow = head;

        while (pFast) {

            if (pFast->next)
            {
                pFast = pFast->next->next;
                pSlow = pSlow->next;
            }
            else
                pFast = pFast->next;

            if (pSlow == pFast)
                break;
        }
        if (pSlow == pFast) {
            ListNode *pCur = head;
            while (pCur!=pSlow) {
                pCur  = pCur->next;
                pSlow = pSlow->next;
            }
            return pSlow;
        } else
            return NULL;
    }
};
