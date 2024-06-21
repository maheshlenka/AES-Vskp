#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
typedef(*fun)(int,int);
fun operation(char);
int main(){
    int a = 10, b = 20, result;
    char ch;

    printf("\n What arithmetic operation to perform: ");
    ch = getchar();

    result = operation(ch)(a, b); 

    printf("\n %c result %d \n", ch, result);

    return 0;
}
fun operation(char ch){
    switch (ch) {
    case '-':
        return sub;
    case '+':
        return add;
    case '*':
        return mul;
    default:
        printf("\n Invalid Choice \n");
    }
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