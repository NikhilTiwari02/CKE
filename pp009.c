#include <stdio.h>
int iseven(int n);
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
int iseven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
