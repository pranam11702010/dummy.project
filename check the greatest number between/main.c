#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter any three number :\n");
    scanf("%d%d%d",&a,&b,&c);
    greater(&a,&b,&c);
    return 0;
}
void greater(int *x,int *y,int *z)
{
     if(*x>*y&&*x>*z)
          printf("%d is the greater number :",*x);
     else if(*y>*x&&*y>*z)
          printf("%d is the greater number :",*y);
     else if(*z>*x&&*z>*y)
          printf("%d is the greater number :",*z);
}
