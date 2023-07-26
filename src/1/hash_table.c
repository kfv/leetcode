/*
 * The hash table here is a trivial implementation to only show
 * the concept. It is nothing you would like to use in production.
 */

#include <stdlib.h>
#include <string.h>

/*
 * You can adjust this value if required, or make it dynamic by
 * using a linked list instead of an array. This is just a simple
 * implementation to show the concept. And the reason why I chose
 * 17, is because it is a prime number, and possibly a good choice
 * to minimise collisions in our small hash table example.
 */
#define TABLE_SIZE 17

typedef struct hash_node {
    int key;
    int value;
    struct hash_node *next;
} hash_node;

hash_node*
hash_node_new(int key, int value)
{
    hash_node *ht = malloc(sizeof(hash_node));

    ht->key = key;
    ht->value = value;
    ht->next = NULL;

    return ht;
}

void
hash_node_insert(hash_node **ht, int key, int value)
{
    int index = abs(key) % TABLE_SIZE;
    hash_node *new_node = hash_node_new(key, value);

    new_node->next = ht[index];
    ht[index] = new_node;
}

int
hash_node_get(hash_node **ht, int key)
{
    int index = abs(key) % TABLE_SIZE;
    hash_node *curr = ht[index];

    while (curr != NULL) {
        if (curr->key == key)
            return curr->value;
        curr = curr->next;
    }

    return -1;
}

void
hash_node_free(hash_node **ht)
{

    for (int i = 0; i < TABLE_SIZE; i++) {
        hash_node *curr = ht[i];
        while (curr != NULL) {
            hash_node *tmp = curr;
            curr = curr->next;
            free(tmp);
        }
    }

    free(ht);
}

int*
twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    hash_node **hash_table = calloc(TABLE_SIZE, sizeof(hash_node*));

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int idx = hash_node_get(hash_table, complement);
        if (idx != -1 && idx != i) {
            *returnSize = 2;
            int* res = calloc(2, sizeof(int));
            res[0] = idx;
            res[1] = i;
            hash_node_free(hash_table);
            return res;
        }
        hash_node_insert(hash_table, nums[i], i);
    }

    hash_node_free(hash_table);

    *returnSize = 0;
    return NULL;
}
