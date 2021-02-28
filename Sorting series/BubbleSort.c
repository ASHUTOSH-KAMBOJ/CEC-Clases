
#include<stdio.h>

int main()
{
    int arr[1000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int i, j,temp;
   for (i = 0; i < n-1; i++){
       for (j = 0; j < n-i-1; j++){
           if (arr[j] > arr[j+1])
             {
                temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
             }
       }
   }

    printf("Sorted array: \n");
   for (i=0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

/*
Inputed Array: 
52 65 35 26 89 1 23 68 95 120 123 256

Sorted array:
1 23 26 35 52 65 68 89 95 120 123 256
