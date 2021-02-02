#include<stdio.h>
int main()//pp005: Write a program to input two numbers and print all even numbers in given range.
{ int n,m;
  printf("Enter the first number :");
  scanf("%d",&n);
  printf("Enter the second number :");
  scanf("%d",&m);
  for(int i=n;i<=m;i++)
  {
      if(i%2==0)
        printf("%d\n",i);
  }

}
