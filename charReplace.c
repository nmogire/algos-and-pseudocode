/*****************************************************************

NAME: Nancy Mogire

DATE: Nov, 2016

FILE: charReplace.c

DESCRIPTION: This file contains the function solving the following problem: function that given a pointer to a linked list replaces all occurences of C1 with C2
****************************************************************/

#include <stdio.h>
#include <string.h>
#include "linkedlist.h"

/*****************************************************************

Function name: charReplace

DESCRIPTION: Function that replaces all occurences of c1 with c2 in a linked list

Parameters: node pointer, char, char

Return values: nodeptr

****************************************************************/

Nodeptr charReplace(Nodeptr top, char c1, const char c2)
{
    Nodeptr curr = top;
    
    while(curr!=NULL){
        if(strcmp(&curr -> data, &c1)== 0){
            strcpy(&curr -> data, &c2);
            curr = curr->next;
        }
        curr = curr->next;
    }

    return top;
}




