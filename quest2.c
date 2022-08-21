#include<stdio.h>
int main()
{
    int prev=0,next=0,i,n,cur=1;
    printf("Enter a number");
    scanf("%d",&n);
    printf("1 ");
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        printf("%d ",next);
        prev=cur;
        cur=next;
    }
    return 0;
}