#include <stdio.h>
int main(){
int a ;
printf("Enter a number\n");
scanf("%d",&a);
printf("Left shift result:%d\n",a<<1); //5=0101,1010=10
printf("Right shift result:%d\n",a>>1);//5=0101,0010=2
return 0;

}