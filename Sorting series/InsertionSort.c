#include<stdio.h>

int main()
{
    int n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int key;
    for(int i=1;i<n;i++)
        {
            key=arr[i];
            int j=i-1;
            while(key<arr[j] && j<n)
                {
                arr[j+1]=arr[j];
                --j;
                }
                arr[j+1] = key;
        }
    printf("Sorted array :");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}


/*

Inputed array :
89 91 72 6 50 31 12 1 0

Sorted array :
0 1 6 12 31 50 72 89 91


*/

