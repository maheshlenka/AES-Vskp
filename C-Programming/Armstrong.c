#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);         //50
temp=n;             //temp=50
while(n>0)    
{    
r=n%10;         //r=0
sum=sum+(r*r*r);    //sum=0*0=0
n=n/10;         //50/10=5
}    
if(temp==sum)    //50!=0
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   