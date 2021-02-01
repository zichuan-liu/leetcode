#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			int len1=1, len2=1;
			ListNode* p=l1;
			ListNode* q=l2;
			while(p->next!=NULL) {
				len1++;
				p = p->next;
			}
			while(q->next!=NULL) {
				len2++;
				q=q->next;
			}

			//补齐
			if(len1>len2) {
				for(int i=0; i<len1-len2; i++) {
					p->next = new ListNode(0);
					p = p->next;
				}
			} else {
				for(int i=0; i<len2-len1; i++) {
					q->next = new ListNode(0);
					q = q->next;
				}
			}
			p=l1;
			q=l2;

			//相加
			int sum = 0, conut = 0;
			ListNode* w = new ListNode(-1);
			ListNode* res=w;//l3的移动指针
			while(q!=NULL||p!=NULL) {
				sum = p->val +q->val+conut;
				conut = sum>=10?1:0;
				res->next = new ListNode(sum%10);
				p = p->next;
				q = q->next;
				res = res->next;
			}

			if(conut) { //若最后还有进位
				res->next=new ListNode(1);
				res=res->next;
			}
			return w->next;

		}
};
