//pp002: Write a program to input a number and check it to be even or odd using switch statement.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    switch(n%2)
    {
    case 0:
        printf("Number is even");
        break;
    case 1:
        printf("Number is odd");
    }
    return 0;
}
