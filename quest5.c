#include<stdio.h>
int main()
{
    int i,a,b,x=1;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    int min=a<b?a:b;
    for(i=1;i<=min;i++)
    {
    if((a%i==0)&&(b%i==0))
    x=i;
    }
    if (x==1)
    printf("\n%d is co-prime",x);
    else
    printf("\n%d is not co-prime",x);
      return 0;
}