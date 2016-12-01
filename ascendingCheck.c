/*****************************************************************

NAME: Nancy Mogire

DATE: Nov, 2016

FILE: ascendingCheck.c

DESCRIPTION: This file contains the function solving the following problem: 
Given a pointer to a list of integers, return 1 if list is sorted in ascending order, and 0 otherwise

****************************************************************/

#include <stdio.h>
#include "linkedlist.h"


/*****************************************************************

Function name: ascendingCheck

DESCRIPTION: Function takes in a linked list top node pointer and traverses linked list
to check if sorted in ascending order

Parameters: Node pointer

Return values:int

****************************************************************/

int ascendingCheck(Nodeptr top)
{
    Nodeptr prev = NULL;
    Nodeptr curr = top;

    while(curr!=NULL){
        if(prev<=curr){
            prev = curr;
            curr = curr -> next;
        }
        else{
            return 0;
        }
    }
    
    return 1;
}
