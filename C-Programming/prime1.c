#include <stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number");
    scanf("%d",n);
    if (n==0){
        printf("It is a special number");
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
                if(count==2){
                    printf("It is a prime number");
                }
                else{
                    printf("It is not a prime number");
                    break;
                }
            }
         

            }
        }
    }
