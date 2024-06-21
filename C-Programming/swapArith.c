#include <stdio.h>
int main(){
    int a=10,b=15;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers are swapped,a=%d,b=%d",a,b);
}