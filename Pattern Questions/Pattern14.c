
#include<stdio.h>

int main()

{

    int n=5;  /* initializing n as 5 */


    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-i-2;j++)
            printf(" ");
        for(int j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");

    }
    for(int i=0;i<n-3;i++)
    {
        for(int j=0;j<i+2;j++)
            printf(" ");
        for(int j=0;j<(2*(n-3)-(2*i+1));j++)
            printf("*");
        printf("\n");

    }
    return 0;
}

/*

    Output Demonstration:


               *
              ***
             *****
              ***
               *


*/

