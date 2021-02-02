#include<stdio.h>
int main()
{
    int arr[10],n,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the numbers :");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d\n",arr[i]);
    }
    return 0;
}
