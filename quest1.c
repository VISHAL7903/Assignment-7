#include<stdio.h>
int main()
{
    int prev=0,next=0,i,cur=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;
    }
     printf("%d ",next);
    return 0;
}