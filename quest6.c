#include<stdio.h>
int main()
{
    int x,i;
   for(x=1;x<=100;x++)
    {
    for (i=2;i<=100;i++)
    {
        if(x%i==0)
        break;
    }
             
    if(x==i)
    printf("\n%d is a prime number",x);
    }
    
    return 0;
    

}