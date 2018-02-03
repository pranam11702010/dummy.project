#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    check(&a);
    return 0;
}
void check(int *x)
{
     if(*x==0)
          printf("this is neutral number ");
     else if(*x<=0)
          printf("this number is negetive ");
     else
          printf("this is a positive number ");
}
