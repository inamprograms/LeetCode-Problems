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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> stk;
        ListNode* cur = head;
        
        stk.push(cur);
        cur = cur->next;
        
        while(cur) {
            while (!stk.empty() && cur->val > stk.top()->val) {   
                stk.pop();  
            }
            stk.push(cur);
            cur = cur->next;
        }
        cur = nullptr;
        
        while (!stk.empty()) {
            stk.top()->next = cur;
            cur = stk.top();
            stk.pop();
        }
        return cur;
    }
};