//#######################
//##   BADOI CARMINA   ##
//##    01-03-2020     ##
//#######################

// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>
#include <stdlib.h>

int main()
{ int no_of_seconds,hours,minutes,sec, remaining_seconds ;

    printf("Give me a number of seconds : ");
    scanf("%d",&no_of_seconds);

    printf("That means...");

    hours = no_of_seconds / 3600;
    remaining_seconds = no_of_seconds - hours*3600;
    minutes = remaining_seconds/60;
    remaining_seconds = remaining_seconds - minutes*60;
    sec = remaining_seconds;

    printf("\n%d hour(s), %d minutes and %d seconds",hours,minutes,sec);







    return 0;
}
