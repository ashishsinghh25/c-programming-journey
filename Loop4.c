#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d" , &n);


    int i=1;
     while (i<=10)
     {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
     }
     return 0;
}