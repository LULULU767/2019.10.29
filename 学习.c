#include<stdio.h>
int main (void)
{
    int x=256;
    printf("Enter x:");
    scanf("%d",&x);
    printf("256:%d-%d-%d\n",x/100,x/100%10 ,x%10 );
    return 0;
}