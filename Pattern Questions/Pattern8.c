

#include<stdio.h>

int main()

{

    int n=5;  /* initializing n as 5 */

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
            printf("%d",j+1);
        printf("\n");

    }
    return 0;
}

/*

    Output Demonstration:

             12345
             1234
             123
             12
             1


*/
