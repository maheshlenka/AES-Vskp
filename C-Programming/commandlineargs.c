#include<stdio.h>

int main(int argc, char *argv[]) {
    int i;
    
    printf("\n File name: %s \n", argv[0]);
    printf("\n Total number of arguments: %d \n", argc);
    printf("\n Arguments produced: %s \n", argv[0]);

    for (i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}