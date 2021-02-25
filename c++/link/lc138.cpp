/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
	public:
		Node* copyRandomList(Node* head) {
			map<Node*, Node*> m;
			m[nullptr] = nullptr;
			Node* curr = head;
			Node* p = new Node(0);// ÑÆ½Úµã

			while(curr) {
				p->next = new Node(curr->val);
				m[curr] = p->next;
				p=p->next;
				curr=curr->next;
			}
			curr = head;
			p = m[curr];
			while(curr) {
				p->random = m[curr->random];
				p = p->next;
				curr = curr->next;
			}
			return m[head];
		}
};
