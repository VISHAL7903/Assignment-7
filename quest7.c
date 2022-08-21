#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
    {
    for (j=2;j<=i;j++)
    {
        if(i%j==0)
        break;
    }
             
    if(i==j)
    printf("\n%d is a prime number",j);
    }
    
    return 0;
}