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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
    
        int carry = 0;
        while (l1 && l2) {
            int sum = l1->val + l2->val + carry;

            l1 = l1->next;
            l2 = l2->next;

            carry = sum / 10;
            sum = sum % 10;

            curr->next = new ListNode(); 
            curr = curr->next;             
            curr->val = sum;    
        }

        while (l1) {

            int sum = l1->val + carry;

            l1 = l1->next;

            carry = sum / 10;
            sum = sum % 10;

            curr->next = new ListNode(); 
            curr = curr->next;             
            curr->val = sum;    
        }
        while (l2) {
            int sum = l2->val + carry;

            l2 = l2->next;

            carry = sum / 10;
            sum = sum % 10;

            curr->next = new ListNode(); 
            curr = curr->next;             
            curr->val = sum;    
        }

        if (carry) {
            curr->next = new ListNode(carry);
        }

        return dummy->next;

    }
};