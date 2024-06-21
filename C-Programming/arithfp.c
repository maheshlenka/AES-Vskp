#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);

int main(){
    int a=10,b=20,result;
    int (*fun)(int ,int);
    fun=add;
    result=(*fun)(10,20);
     printf("Result %d\n",result);
    fun=sub;
    result=(*fun)(10,20);
     printf("Result %d\n",result);
    fun=mul;
    result=(*fun)(10,20);
     printf("Result %d\n",result);
    
    
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
