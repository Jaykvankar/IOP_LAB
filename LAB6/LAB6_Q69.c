#include<stdio.h>
#define n 5
int main()
{
    int a[n], target, count=0, pos[n];
    printf("Enter the Array Element\n");
    for(int i=0;i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d", &target);
    for(int i=0; i<n; i++)
    {
        if(target==a[i])
        {
            count+=1;
        }
    }
    if(count>0)
    {
    printf("\n\nThe element is present in array\n");
    printf("%d time\nwith position:", count);
    for(int i=0; i<n; i++)
    {
        if(target==a[i])
        {
            printf("%d ", i);
        }
    }
    }
    else 
    {
        printf("the given element is not present");
    }
    return 0;
}