#include <stdio.h>
int main(){
int p,r,t;
printf("Enter the period,rate of interest and time");
scanf("%d%d%d",&p,&r,&t);
printf("Simple Interest is:%d",((p*r*t)/100));
return 0;


}