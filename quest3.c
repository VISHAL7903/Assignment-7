#include<stdio.h>
int main()
{
    int prev=0,next=0,i,cur=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
        if(next==n)
        {
            printf("Number is Found ");
            break;
        }
        if(next>n)
        {
            printf("Number is not found ");
            break;
        }
    }
    printf("%d",n);
    return 0;
}