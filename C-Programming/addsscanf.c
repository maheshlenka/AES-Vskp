#include<stdio.h>
int main(int argc,char *argv[]){
    int i,n,sum=0;
    for(i=1;i<argc;i++){
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("\n Sum of all given numbers:\n",sum);
}