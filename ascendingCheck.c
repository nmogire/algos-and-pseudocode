/*****************************************************************

NAME: Nancy Mogire

DATE: Nov, 2016

FILE: main.c

DESCRIPTION: This file contains the function solving the following problem:

****************************************************************/

#include <stdio.h>
#include "ascendingCheck.h"

/*****************************************************************

Function name: main

DESCRIPTION: 

Parameters: argc, argv[], uses fgets to read from stdin

Return values:

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
