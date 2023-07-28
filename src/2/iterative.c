#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode*
addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *dummy = calloc(1, sizeof(struct ListNode));
    struct ListNode *p = dummy;
    int carry = 0;

    while (l1 || l2) {
        int sum = carry;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;

        p->next = calloc(1, sizeof(struct ListNode));
        p->next->val = sum % 10;

        p = p->next;
    }

    if (carry) {
        p->next = calloc(1, sizeof(struct ListNode));
        p->next->val = carry;
    }

    struct ListNode *res = dummy->next;
    free(dummy);
    return res;
}
