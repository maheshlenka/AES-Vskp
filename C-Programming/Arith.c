#include<stdio.h>
int main(){

    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The sum of the two numbers is:%d",a+b);
    printf("The subtraction of the two numbers is:%d",a-b);
    printf("The multiplication of the two numbers is:%d",a*b);
    printf("The division of the two numbers is:%f",a/b);
    printf("The mod of the two numbers is:%d",a%b);
    return 0;
}