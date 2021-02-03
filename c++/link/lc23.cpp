#include<string>
#include<iostream>
#include<vector>

using namespace std;

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
class Solution {//∑÷÷Œ£¨πÈ≤¢
	public:
		ListNode* mergeKLists(vector<ListNode*>& lists) {
			int n = lists.size();
			ListNode* solve = nullptr;
			if(n==0) return solve;
			solve = lists[n-1];
			if(n==1) return solve;
			lists.pop_back();
			
			n--;

			while(n) {
				// printNode(solve);n
				// cout<<"n: "<<n<<endl;
				ListNode* temp =  lists[n-1];
				lists.pop_back();
				solve = twomerge(temp, solve);
				--n;
			}
			return solve;
		}

		ListNode* twomerge(ListNode* list1, ListNode* list2) {
			ListNode* res = new ListNode();
			ListNode* l1 = list1;
			ListNode* l2 = list2;

			ListNode* pass = res;
			while(l1!=nullptr&&l2!=nullptr) {
				if(l1->val>l2->val) {
					pass->next = new ListNode(l2->val);
					l2 = l2->next;
				} else {
					pass->next = new ListNode(l1->val);
					l1 = l1->next;
				}
				pass = pass->next;

			}
			if(l1==nullptr&&l2!=nullptr)	pass->next=l2;
			else if(l2==nullptr&&l1!=nullptr)	pass->next=l1;


			// printNode(res);

			return res->next;
		}


		void printNode(ListNode* list) {
			while(list!=nullptr) {
				cout<<list->val<<" ";
				list=list->next;
			}
			cout<<endl;
		}

};

int main() {

}
