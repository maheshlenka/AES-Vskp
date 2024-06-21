#include <stdio.h>
int amstrng(int c);
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    amstrng(a);
    return 0;
}
int amstrng(int c){
    int temp,sum=0,r;
    temp=c;
    while (c>0){
        r=c%10;
        sum=sum+(r*r*r);
        c=c/10;
         }
        if(temp==sum){
            printf("It is a amstrong number");
        
        }
        else{
            printf("It is not a amstrong number");
          
        }
   
}