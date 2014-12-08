#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x),next(NULL) {}
};

ListNode *insertion(ListNode *head)
{
	if (head == NULL)
		return NULL;
	ListNode *newHead = head;
	head = head->next;
	newHead->next = NULL;

	while (head != NULL) {
		ListNode *curNode = head;
		ListNode *nextHead = head->next;
		ListNode *curSort = newHead;

		while (curSort->next) {
			if (curNode->val < curSort->next->val)
				break;
			curSort = curSort->next;
		}
		if (curSort == newHead && curNode->val < curSort->val) {
			curNode->next = curSort;
			newHead = curNode;
		} else {
		        curNode->next = curSort->next;
			curSort->next = curNode;
		}
		head = nextHead;

	}
	return newHead;
}
