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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);

        ListNode* prev = dummy;
        ListNode* cur = head;

        while(cur){
            ListNode* nxt = cur->next;

            if(cur->val == val){
                prev->next = nxt;    
            }
            else{
                prev = prev->next;
                // prev = cur;
            }
            cur = nxt;
        }
        return dummy->next;
    }

};