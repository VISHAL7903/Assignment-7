#include<stdio.h>
int main()
{
    int b,i,n,a=0;
    printf("Enter a number");
    scanf("%d",&b);
    for (n=b;1;n++)
    {
        a=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            a=1;
        }
        if(a==0)
        {
        printf("%d",n);
        break;
    }
    }
return 0;
}