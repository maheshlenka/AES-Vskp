#include<stdio.h>
int main(){
    int a=10;
    int i;
    i=i<<2;
    if (i&1){
        printf("1");
    }
    else{
        printf("0");
    }
}