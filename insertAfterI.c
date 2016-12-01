/*****************************************************************

NAME: Nancy Mogire

DATE: Nov, 2016

FILE: insertAfterI.c

DESCRIPTION: This file contains the function solving the following problem: Function that inserts and int n after the ith node on a linked list

****************************************************************/

#include <stdio.h>
#include "linkedlist.h"

/*****************************************************************

Function name: insertAfterInodes

DESCRIPTION: Function that takes in a linked list top node pointer and two integers n and i. inserts n after the ith node on list

Parameters: node pointer

Return values: nodeptr

****************************************************************/

Nodeptr insertAfterInodes(Nodeptr top, int n, int i)
{
    Nodeptr prev = NULL;
    Nodeptr temp = NULL;
     temp -> num = n;
    int counter = 0;

    if(top -> next!=NULL){
        if(i>counter){
            temp -> next = prev -> next;
            prev -> next = temp;
        }
        else{
            counter+=1;
            top = top->next;
        }
    }
    else{
        temp -> next = top -> next;
        top -> next = temp;
    }
    return top;
}




