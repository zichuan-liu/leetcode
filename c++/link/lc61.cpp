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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode *p = head;
        // 统计长度
        int len = 1;
        for(; p->next; p=p->next) len++;
        // 首尾相连
        p->next = head;
        // 找到断点
        k %= len;
        for(p = head; --len != k; p = p->next);
        // 更改首尾
        head = p->next;
        p->next = NULL;
        return head;
    }
};
