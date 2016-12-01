/*****************************************************************

NAME: Nancy Mogire

DATE: Nov, 2016

FILE: freeAllNodes.c

DESCRIPTION: This file contains the function solving the following problem: Function to free all nodes of a linked list

****************************************************************/

#include <stdio.h>
#include "linkedlist.h"

/*****************************************************************

Function name: freeAllNodes

DESCRIPTION: Function that takes in a linked list top node pointer and frees all nodes of the linked list

Parameters: node pointer

Return values: nodeptr

****************************************************************/

Nodeptr freeAllNodes(Nodeptr top)
{
    Nodeptr temp;
    while(top!=NULL){
        temp = top;
        top = top -> next;

        free(temp);
    }

    return top;
}




