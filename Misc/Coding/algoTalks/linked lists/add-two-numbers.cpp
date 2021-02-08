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
        ListNode *ans = new ListNode();
        ListNode *temp = ans;
        int carry = 0;
        while(l1 || l2) {
            if(!l1) {
                temp->val = l2->val + carry;
                l2 = l2->next;
            }
            else if(!l2) {
                temp->val = l1->val + carry;
                l1 = l1->next;
            }
            else {
                temp->val = l1->val + l2->val + carry;
                l1 = l1->next;
                l2 = l2->next;
            }
            if(temp->val >= 10) {
                temp->val %= 10;
                carry = 1;
            }
            else carry = 0;
            if(!l1 && !l2 && !carry)
                return ans;
            if(!l1 && !l2 && carry) {
                ListNode *nd = new ListNode(carry);
                temp->next = nd;
                return ans;
            }
            ListNode *nd = new ListNode(carry);
            temp->next = nd;
            temp = temp->next;
        }
        return ans;
    }
};