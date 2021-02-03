s#include<string>
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

    }
    
    // 翻转一个子链表，并且返回新的头与尾
    pair<ListNode*, ListNode*> myReverse(ListNode* head, ListNode* tail) {
        ListNode* prev = tail->next;
        ListNode* p = head;
        while (prev != tail) {
            ListNode* nex = p->next;
            p->next = prev;
            prev = p;
            p = nex;
        }
        return {tail, head};
    }
};
