
#include <stdio.h>
#include <stdlib.h>
#include "list/list.h"

int main(){
    S_Node* head = (S_Node *)malloc(sizeof(S_Node));
    head->value = 0;
    S_Node **linkp = &head;
    for(int i = 1; i < 6; i+=2){
        sll_insert(linkp, i); 
    }   
    print_sll(head);

    sll_insert(linkp, 2); 
    print_sll(head);

}


