#include <stdio.h>
int sum(int a,int b);
int main(){
    int add,c,d;
    printf("Enter two numbers\n");
    scanf("%d%d",&c,&d);
    sum(c,d);
   
    return 0;
}
int sum(int a,int b){
   int add=a+b;
    printf("The sum is:%d",add);
    
}