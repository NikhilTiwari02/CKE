#include<stdio.h>
#include "p0010.h"
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(iseven(n))
    printf("Number is even");
    else
        printf("Number is odd");
    return 0;

}
