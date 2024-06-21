#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n, i,temp;

    printf("Enter how many elements: ");
    scanf("%d", &n);

    temp= realloc(p,(n*sizeof(int))+10);
    p=temp;
    n+=10;
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