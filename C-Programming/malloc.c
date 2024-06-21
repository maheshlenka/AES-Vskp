#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i;

    printf("Enter how many elements: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "\nFailed to allocate memory\n");
        exit(1);
    }

    printf("\nMemory allocated at: %p\n", (void *)p);

    printf("Initial Values\n");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]); 

    for (i = 0; i < n; i++) {
        p[i] = i + 1; 
    }

    printf("\nValues after assignment\n");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]); 
    }

    
}
}