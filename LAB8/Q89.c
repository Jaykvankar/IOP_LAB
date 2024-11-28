#include<stdio.h>
int main()
{
    int n;
    printf("how many array elements need to be entered\n");
    scanf("%d",&n);
    int arr1[n],arr2[n],*a1ptr=arr1,*a2ptr=arr2;
    printf("Enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d", (a1ptr+i));
    }
    for(int i=0;i<n;i++)
    {
        *(a2ptr+i)=*(a1ptr+n-i-1);
    }
    printf("elements\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(a2ptr+i));
    }
    return 0;
}