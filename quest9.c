#include<stdio.h>   
int main()
{
    int a,r,x,s;
    printf("Enter the number\n");
    scanf("%d",&a);
    s=0; 
    x=a;
   while(x!=0)
   {
    r=x%10;
    s=s+r*r*r;
    x=x/10;
   }
    if(s==a)
     printf("\n%d is a Armstrong Number",a);
     else
     printf("\n%d is Not Armstrong number",a);
    
    return 0;
}