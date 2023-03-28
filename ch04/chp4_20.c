#include <stdio.h>

int main()
{

    int zero = 0;
    int nonzero = 2;
    // char nonzero = 'a';

    
    /* * for this code we can only test using characters and not strings, 
    because strings are arrays of characters and the compiler will not allow us to compare an array to an integer
    but characters will be converted to their ASCII values(integers) when compared to integers */

    printf("\n1 respresents true and 0 represents false in the logic column\n\n");

    // first table showing and(&&) logic truth table
    printf("Truth table for the logical expression Condition 1 && Condition 2\n");
    printf("____________________________________________\n\n");

    printf(" Condition 1   Condition 2  Condition 1 && Condition 2\n");
    // printf(" %i             %i             %i \n", 0,0,0);
    // printf(" %i             nonzero       %i \n", 0, 0);
    // printf(" nonzero       %i             %i \n", 0, 0);
    // printf(" nonzero       nonzero       nonzero \n");

    printf(" %i             %i            %i \n", zero,zero,zero && zero);
    printf(" %i             %i            %i \n", zero, nonzero, zero && nonzero);
    printf(" %i             %i            %i \n", nonzero, zero, nonzero && zero);
    printf(" %i             %i            %i \n", nonzero, nonzero, nonzero && nonzero);

// second table showing or(||) logic truth table
    printf("Truth table for the logical expression condition 1 || condition 2\n");
    printf("____________________________________________\n\n");

    printf(" Condition 1   Condition 2  Condition 1 || Condition 2\n");
    // printf(" %i             %i            %i \n", 0, 0, 0);
    // printf(" %i             nonzero      nonzero \n", 0);
    // printf(" nonzero       %i            nonzero \n", 0);
    // printf(" nonzero       nonzero      nonzero \n");

    printf(" %i             %i            %i \n", zero, zero, zero);
    printf(" %i             %i            %i \n", zero, nonzero, zero || nonzero);
    printf(" %i             %i            %i \n", nonzero, zero, nonzero || zero);
    printf(" %i             %i            %i \n", nonzero, nonzero, nonzero || nonzero);

// third table showing not(!) logic truth table
    printf("Truth table for the logical expression condition 1  !condition 1\n");
    printf("____________________________________________\n\n");

    printf(" Condition 1   !Condition 1\n");
    // printf(" %i              nonzero \n", 0);
    // printf(" nonzero        %i \n",  0);

    printf(" %i             %i \n", zero,  !zero);
    printf(" %i             %i \n", nonzero,  !nonzero);
}

