#ifndef _LIST_H
#define _LIST_H

typedef struct SNODE{
    struct SNODE* link;
    int value;
} S_Node;


void print_sll(S_Node *head);
int sll_insert( register S_Node **linkp, int new_value);
int sll_remove( register S_Node **linkp, S_Node *node);

#endif

