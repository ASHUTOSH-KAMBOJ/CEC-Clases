#include<stdio.h>

int main()

{

    int n=5;  /* initializing n as 5 */

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            printf("*");
        printf("\n");

    }
    return 0;
}

/*

            Output Demonstration:
            
            *
            **
            ***
            ****
            *****

*/