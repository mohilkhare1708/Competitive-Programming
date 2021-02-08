struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/*
1 2 3 4 5
H     P
*/

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || k == 0)
            return head;
        ListNode *temp1 = head, *temp2 = head, *p1;
        int len = 0, i = 0;
        //find len of LL
        while (temp1 != NULL)
        {
            len++;
            temp1 = temp1->next;
        }
        k %= len;
        //edge case
        if (len == k || k == 0)
            return head;
        //reach the point from where you need to slice LL
        int trav = len - k;
        while (i < trav - 1)
        {
            temp2 = temp2->next;
            i++;
        }
        p1 = temp2->next;
        ListNode *tp = p1;
        temp2->next = NULL;
        // will return p1
        ListNode *temp3 = p1;
        while (temp3->next != NULL)
        {
            temp3 = temp3->next;
        }
        temp3->next = head;
        return p1;
    }
};