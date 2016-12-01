/*****************************************************************

NAME: Nancy Mogire

DATE: Nov, 2016

FILE: reversal.c

DESCRIPTION: This file contains the function solving the following problem: reverse linked list by manipulating nodes only with no new list created

****************************************************************/

#include <stdio.h>
#include "linkedlist.h"

/*****************************************************************

Function name: reversed

DESCRIPTION: Function that takes in a linked list top node pointer and reverses the linked list by turning the next node pointer to the opposite direction

Parameters: node pointer

Return values: nodeptr

****************************************************************/

Nodeptr reversed(Nodeptr top)
{
    Nodeptr prev = NULL;
    Nodeptr temp;

    while(top -> next!=NULL){
        temp = top;
        top = top -> next;
        temp -> next = prev;
        prev = temp;
    }

    top -> next = prev;
    return top;
}
