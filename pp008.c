#include <stdio.h>
#include <ctype.h>
int main(int argc,char *argv[])
{ if(argc>1)
{ for(int i=1;i<argc;i++)
 {
    if(atoi(argv[i])%2==0)
        printf("%d ",atoi(argv[i]));
 }

}
else
{
    printf("syntax is <pp008.c><few numbers>");
}

}
