#include<stdio.h>


int partition (int arr[], int l, int h)
{
    int temp,
    pivot = arr[h],
    i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]< pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=temp;
    return (i+1);
}

void quickSort(int arr[], int lo , int hi)
{   int pi;
    if(lo < hi)
    {
        pi = partition(arr,lo,hi); // for finding the partitionelement

        quickSort(arr,lo,pi-1);  // for the left side

        quickSort(arr,pi+1,hi);   // for the right side
    }
}


int main()
{
    int n,arr[1000];

    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    quickSort(arr,0,n-1);

    printf("Sorted Array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}


/*

Inputed Array :
900 890 760 658 523 456 326 250 152 62 42 12 0

Sorted Array :
0 12 42 62 152 250 326 456 523 658 760 890 900

*/
