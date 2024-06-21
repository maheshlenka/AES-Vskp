#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int (*fun[3])(int, int) = {NULL};

int main() {
    int a = 10, b = 20, result;
    char ch;

    fun[0] = &add;
    fun[1] = &sub;
    fun[2] = &mul;

    printf("\n What arithmetic operation to perform: ");
    ch = getchar();

    switch (ch) {
        case '-':
            result = fun[0](a, b);
            break;
        case '+':
            result = fun[1](a, b);
            break;
        case '*':
            result = fun[2](a, b);
            break;
        default:
            printf("\n Invalid Choice \n");
            return 1; 
    }

    printf("\n %c result: %d \n", ch, result);

    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}