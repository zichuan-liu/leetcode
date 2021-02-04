/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = nullptr;
    	ListNode* now = head;
    	while(now!=nullptr){
    		ListNode* next = now->next;
    		now->next=pre;
    		pre = now;
    		now = next;
		}
        return pre;
    }
};
