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
    bool hasCycle(ListNode *head) {
      if (!head)
          return false;
      ListNode *fir = head, *sec = head;
      while(fir&&sec) {
          fir = fir->next;
          sec = sec->next;
          if (sec&&sec->next)
              sec = sec->next;
          else
              break;
          if (fir&&sec&&fir==sec)
            return true;

      }
      return false;
    }
};
