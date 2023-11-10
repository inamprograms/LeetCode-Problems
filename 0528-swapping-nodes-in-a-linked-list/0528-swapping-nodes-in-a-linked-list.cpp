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
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;
        ListNode* cur = head;
        while (cur) {
            length++;
            cur = cur->next;
        }

        cur = head;
        for (int i = 1; i < k; i++) {
            cur = cur->next;
        }
        ListNode* start = cur;
    
        cur = head;
        for (int i = 1; i < length - k + 1; i++) {
            cur = cur->next;
        }
        ListNode* end = cur;

        int temp = start->val;
        start->val = end->val;
        end->val =  temp;

        return head;
    }
};