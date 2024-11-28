#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many elements are there in array\n");
    scanf("%d",&n);
    int arr[n],*aptr=arr,max;
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",aptr+i);
    }
    max=*aptr;
    for(int i=0;i<n-1;i++)
    {
        if(*(aptr+i)<*(aptr+i+1))
        {
            max=*(aptr+i+1);
        }
    }
    printf("\nThe greatest number : %d",max);
    return 0;
}