#include<stdio.h>
int main()// Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd
{
    int n;
    printf("Enter few numbers :");
    for(;;)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            if(n%2==0)
                printf("%d is even",n);
            else
                printf("%d is odd",n);

        }
}
}
