/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, int> keeper;
        while(headA != NULL) {
            keeper[headA]++;
            headA = headA->next;
        }
        while(headB != NULL) {
            if(keeper[headB])
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};