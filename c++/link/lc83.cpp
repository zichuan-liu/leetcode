class Solution {
public:
        ListNode* deleteDuplicates(ListNode* head) {
        if (head==nullptr)
            return nullptr;
        ListNode* sentry=head, *cur=head;
        while(cur!=nullptr){
            if(sentry->val != cur->val){
                sentry->next = cur;
                sentry = cur;
            }
            cur = cur->next;
        }
        sentry->next=nullptr;
        return head;
    }
};
