#include "list.h"
#include <stdlib.h>
#include <stdio.h>

#define FALSE 0
#define TRUE 1
void print_sll(S_Node *head){
    while(head != NULL){
        printf("%d->", head->value);
        head = head->link;
    }
    printf("\n");
}

int sll_insert(register S_Node **linkp, int new_value)
{
    register S_Node *current;
    register S_Node *new;

    while((current = *linkp) != NULL &&
        current->value < new_value)
        linkp = &current->link;


    new = (S_Node *)malloc(sizeof(S_Node));
    if(new == NULL)
        return FALSE;
    new->value = new_value;

    new->link = current;
    *linkp = new;
    return TRUE;
}

