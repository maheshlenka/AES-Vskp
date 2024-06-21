#include <stdio.h>
int prime(int c);
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    prime(a);
    return 0;
}
int prime(int c){
    for (int i=2;i<c;i++){
        if(c%i==0){
            printf("It is not a prime number\n");
            break;
        }
        else{
            printf("It is a prime number\n");
            break;
        }
    }
    
}