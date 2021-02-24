#include<stdio.h>

int main()
{
    int n=5;

    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-i-2;j++)
            printf(" ");
        for(int j=1;j<=i+1;j++)
            printf("%d",j);
        for(int j=i;j>0;j--)
            printf("%d",j);
        printf("\n");
    }
    for(int i=0;i<n-3;i++)
    {
        for(int j=0;j<i+2;j++)
            printf(" ");
        for(int j=i;j<(2*(n-3)-(2*i+1))-1;j++)
            printf("%d",j+1);
        for(int j=i;j<=1;j++){
            if(j!=0)
            printf("%d",j);
        }
        printf("\n");

    }

}

/*

        OUTPUT Demonstration:

               1
              121
             12321
              121
               1
               
 */
