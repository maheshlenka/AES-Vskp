#include <stdio.h>
int swap(int c,int d);
int main(){
    int a,b,A,B;
    printf("Enter two numbers for swapping\n");
    scanf("%d%d",&a,&b);
    A=a;
    B=b;
    printf("The values of A & B are :%d & %d\n",a,b);
    swap(a,b);
    
}
int swap(int c,int d){
    c=c+d;
    d=c-d;
    c=c-d;
printf("After swapping the values of A & B are :%d & %d\n",c,d);
}