#include<stdio.h>

// Function prototype
void change(int *p);

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int i;

    printf("\nArray elements before change function are\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    change(a);

    printf("\nArray elements after change function are\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

// Function definition
void change(int *p) {
    int i;
    for (i = 0; i < 5; i++, p++) {
        *p = *p + 2;
    }
}