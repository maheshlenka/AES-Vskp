#include <stdio.h>
int main(){
int a,b;
printf("Enter the two numbers\n");                      
scanf("%d%d",&a,&b); //a=5,b=7
printf("AND Operator Result:%d\n",a&b); //5
printf("OR Operator Result:%d\n",a|b);//7
printf("XOR Operator Result:%d\n",a^b);//2
return 0;

}