class Solution {
	public:
		ListNode* deleteDuplicates(ListNode* head) {
			if (head==nullptr)
				return nullptr;
			ListNode* dummyNode = new ListNode(0,head);
			//有重复出现则删除，相当于找特定值的结点，需要其前驱结点
			ListNode* pre = dummyNode;
			ListNode* cur = head;
			while(cur!=nullptr) {
				if(cur->next&&cur->val==cur->next->val) {
					pre->next=cur->next;
				} else {  //没遇到重复结点
					pre = cur;   //前驱结点可以移动
				}
				cur = cur->next;  //不管遇没遇到重复结点，cur都是一直向前的
			}
			return dummyNode->next;
		}
};
