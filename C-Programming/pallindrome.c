#include<stdio.h>               //Pallindrome=12321
#include<string.h>              //maam

int main(){
    char str[]={"lses"};
   // prinf("Enter a string to check");
    //scanf("%s",str);
    int l=0;                                 //level     {01234}  
    int h = strlen(str)-1;                  //char str[]={level};

    while(h>1){
        if(str[l++] != str[h--]){               //level,e=e
            printf("It is not a pallindrome\n",str);
            return 0;
        }
    }
    printf("It is a pallindrome");
    return 0;
}