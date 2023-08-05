#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

void
insert(struct ListNode **head, int val)
{
    struct ListNode *new = calloc(1, sizeof(struct ListNode));
    struct ListNode *old = *head;
    new->val = val;
    new->next = NULL;

    if (*head == NULL) {
        *head = new;
        return;
    }

    while (old->next)
        old = old->next;

    old->next = new;
    return;
}

void
cleanList(struct ListNode *list)
{
    struct ListNode *tmp;

    while (list) {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}

int
main(void)
{
    /* Test case 1: Both arrays are 0 */
    struct ListNode* l1 = calloc(1, sizeof(struct ListNode));
    l1->val = 0;
    struct ListNode* l2 = calloc(1, sizeof(struct ListNode));
    l2->val = 0;
    struct ListNode* res = addTwoNumbers(l1, l2);
    assert(res->val == 0);
    cleanList(l1);
    cleanList(l2);
    cleanList(res);
    res = NULL;
    l1 = NULL;
    l2 = NULL;

    /* Test case 2: Resulting in a carry at the end */
    insert(&l1, 1);
    for (int i = 0; i < 9; i++)
        insert(&l2, 9);
    res = addTwoNumbers(l1, l2);
    struct ListNode* p = res;
    for (int i = 0; i < 9; i++) {
        assert(p->val == 0);
        p = p->next;
    }
    assert(p->val == 1);
    cleanList(l1);
    cleanList(l2);
    cleanList(res);
    res = NULL;
    l1 = NULL;
    l2 = NULL;

    /* Test case 3: Numbers of different lengths */
    insert(&l1, 9);
    insert(&l1, 8);
    insert(&l1, 7);
    insert(&l2, 3);
    insert(&l2, 2);
    res = addTwoNumbers(l1, l2);
    assert(res->val == 2);
    assert(res->next->val == 1);
    assert(res->next->next->val == 8);
    cleanList(l1);
    cleanList(l2);
    cleanList(res);
    res = NULL;
    l1 = NULL;
    l2 = NULL;

    /* Test case 4: Adding number to itself */
    insert(&l1, 5);
    insert(&l1, 6);
    insert(&l1, 7);
    l2 = l1;
    res = addTwoNumbers(l1, l2);
    assert(res->val == 0);
    assert(res->next->val == 3);
    assert(res->next->next->val == 5);
    assert(res->next->next->next->val == 1);
    cleanList(l1);
    cleanList(res);
    res = NULL;
    l1 = NULL;
    l2 = NULL;

    /* Test case 5: Adding number to itself, resulting in all zeros */
    insert(&l1, 5);
    l2 = l1;
    res = addTwoNumbers(l1, l2);
    assert(res->val == 0);
    assert(res->next->val == 1);
    cleanList(l1);
    cleanList(res);

    printf("All test cases passed.\n");
    return EXIT_SUCCESS;
}
