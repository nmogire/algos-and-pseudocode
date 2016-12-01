/*****************************************************************

NAME: Nancy Mogire

DATE: Nov, 2016

FILE: sortAscending.c

DESCRIPTION: This file contains the function solving the following problem: sort a linked list in ascending order. in each pass through list, get largest and place it at top of list. in subsequent passes do not resort the sorted part.

****************************************************************/

#include <stdio.h>
#include "linkedlist.h"

/*****************************************************************

Function name: sortAscending

DESCRIPTION: Function that takes in a linked list top node pointer and sorts in ascending order

Parameters: node pointer

Return values: nodeptr

****************************************************************/

Nodeptr sortAscending(Nodeptr top)
{
    Nodeptr temp;
    Nodeptr curr;
    Nodeptr largest = NULL;
    Nodeptr start = top;

    while(start!=NULL){
        curr = start;
        start = start -> next;
         while(curr!= NULL){
            if((curr -> num) > (largest -> num)){
                largest = curr;
            }
            else{
                curr = curr -> next;
            }
        }
    }
    
    temp = largest;
    free(largest);
    temp -> next = top;
    top = temp;

    return top;
}




