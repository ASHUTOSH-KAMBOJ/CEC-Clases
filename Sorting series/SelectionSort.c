#include<stdio.h>

int main()
{
    int n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int min,temp;
    for(int i=0;i<n-1;i++)
        {
            min=arr[i];
            for(int j=i+1;j<n;j++)
                {
                if(min>arr[j])
                {
                    temp=arr[j];
                    arr[j]=min;
                    min=temp;
                }
                }
    arr[i]=min;
        }
    printf("Sorted array :");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}


/*

Inputed array :
8 9 7 6 5 3 2 1

Sorted array :
1 2 3 5 6 7 8 9


*/
