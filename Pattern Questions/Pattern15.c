#include<stdio.h>

int main()
{
    int n=5;

    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-i-2;j++)
            printf(" ");
        for(int j=0;j<2*i+1;j++)
            printf("%d",j+1);
        printf("\n");

    }
    for(int i=0;i<n-3;i++)
    {
        for(int j=0;j<i+2;j++)
            printf(" ");
        for(int j=0;j<(2*(n-3)-(2*i+1));j++)
            printf("%d",j+1);
        printf("\n");

    }
}

/*
        OUTPUT Demonstration:

               1
              123
             12345
              123
               1

*/
