#include <stdio.h>
int odev(int c);
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    odev(a);
}
int odev(int c){
    if (c%2==0){
        printf("It is a even number");
    }
    else {
        printf("It is a odd number");
    }
}