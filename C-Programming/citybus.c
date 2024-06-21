//calculate the bus fare
#include <stdio.h>
int main(){
    char start,stop,st,stp;
    char str[8]=["OT","GC","SH","KS","RM","AG","AV","OS"];
   
    printf("Enter the input bus stop");
    scanf("%c",&start);
    printf("Enter the stop station");
    scanf("%c",&stop);
    for (int i=0;i<=8;i++){
        if (start=str[i]){
            i=st;
        }
        if (stp==str[i]){
            i=stp;
        }
        if(st==stp){
            printf("Invalid Input");
        }
        else{
            
        }
    }

}