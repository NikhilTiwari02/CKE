#include <stdio.h>
int main()//pp003: Write a program to input a number and check it to be even or odd using bitwise operator.
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    if(n&1)
        printf("Number is odd");
    else
        printf("Number is even");
    return 0;
}
