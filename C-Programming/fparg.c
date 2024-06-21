#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
void operation(char,int,int,int (*fun)(int,int));
int main(){
    int a=10,b=20,result;
    char ch;
    printf("\n Write an arithematic operatiobn\n");
    ch=getchar();
    switch (ch)
    {
    case '-':
        operation(ch,a,b,add);
        break;
    case '+':
        operation(ch,a,b,sub);
        break;
    case '*':
        operation(ch,a,b,mul);
        break;

    default:
        printf("\n Invalid Choice \n");
        break;
    }
}
void operation(char ch,int x,int y,int (*fun)(int,int)){
    int result;
    result =fun(x,y);
    printf("\n %c result : %d \n",ch,result);
}
int add(int x,int y){
        return x+y;
    }
int sub(int x,int y){
        return x-y;
    }
int mul(int x,int y){
        return x*y;
    }