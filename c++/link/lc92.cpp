class Solution {
	public:
		ListNode* reverseBetween(ListNode* head, int m, int n) {
			ListNode* pre = nullptr;
            			ListNode* dummyNode = new ListNode(0,head);

			ListNode* now = head;
            			ListNode* cur = now;
			for(int i=0; i<m-1; i++) { //now移动到需要反转的地方
				cur = now;
                now = now->next;
			}

			ListNode* now_pre = now;
            // cout<<now->val<<endl;


			for(int i=0; i<n-m+1; i++) { //lc206
// cout<<now->val<<endl;
				ListNode* next = now->next;
				now->next = pre;
				pre = now;
                // if(next==nullptr){
                // cout<<now->val<<endl;
                // cout<<pre->val<<endl;

                //     break;

                // }

                now = next;

                // cout<<now->val<<endl;
			}

			cur->next = pre;
			now_pre->next = now;
            if(m==1) return pre;
			return dummyNode->next;
		}
};
