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
		ListNode* sortList(ListNode* head) {
			return sortList(head, nullptr);
		}

		ListNode* sortList(ListNode* head, ListNode* tail) {
			if(head==tail) return head;
			if(head->next==tail) {
				head->next = nullptr;//这一步将next置于nullptr是必须的，
				//因为最后在合并的时候，是根据nullptr来进行判断链表结束的，
				//要是不置nullptr的话，就一直在是两个链表（最开始的链表，而不是分治得到的链表！！！
				return head;
			}
			ListNode *f=head,*s=head;
			while(f!=tail) {
				f=f->next;
				s=s->next;
				if(f!=tail) f=f->next;
			}

			return merge(sortList(head, s), sortList(s, tail));
		}

		ListNode* merge(ListNode* head1, ListNode* head2) {
			ListNode* dummyHead = new ListNode(0);
			ListNode* temp = dummyHead, *temp1 = head1, *temp2 = head2;
			while (temp1 != nullptr && temp2 != nullptr) {
				if (temp1->val <= temp2->val) {
					temp->next = temp1;
					temp1 = temp1->next;
				} else {
					temp->next = temp2;
					temp2 = temp2->next;
				}
				temp = temp->next;
				if (temp1 != nullptr) {
					temp->next = temp1;
				} else if (temp2 != nullptr) {
					temp->next = temp2;
				}

			}
			return dummyHead->next;
		}
};
