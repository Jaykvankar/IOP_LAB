#include<stdio.h>
int main()
{
    int n,limit;
    printf("how many array elements need to be entered\n");
    scanf("%d",&n);
    int arr1[n],*a1ptr=arr1;
    printf("Enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d", (a1ptr+i));
    }
    printf("Enter number of elements you want to copy\n");
    scanf("%d",&limit);
    int arr2[limit],*a2ptr=arr2;
    for(int i=0;i<limit;i++)
    {
        *(a2ptr+i)=*(a1ptr+i);
    }
    printf("elements\n");
    for(int i=0;i<limit;i++)
    {
        printf("%d\n", *(a2ptr+i));
    }
    return 0;
}