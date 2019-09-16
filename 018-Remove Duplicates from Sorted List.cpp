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
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* t = head;
		if (!t)return NULL;
		while (t&&t->next) {
			if (t->val == t->next->val)t->next = t->next->next;
			else t = t->next;
		}
		return head;
	}
};