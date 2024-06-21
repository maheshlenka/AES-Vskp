//no of 1,2 and 5 rupee coins for the  
#include <stdio.h>
int main(){
    int n,one=0,two=0,five;
    printf("Enter the number");
    scanf("%d",&n);
    five=(n-4)/5;

    if(((n-5*five)%2)==0){
        one=2;
    }
    else{
        one=1;
    }
    two=(n-5*five-one)/2;
    printf("The number of \n 1 Rupee Coin:%d \n 2 Rupee Coin:%d \n 5 Rupee Coin:%d",one,two,five);
    return 0;
}
