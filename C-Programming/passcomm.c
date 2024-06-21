#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i, n, result;

    if (strcmp(argv[1], "-a") == 0) {
        result = 0;
        for (i = 2; i < argc; i++) {
            sscanf(argv[i], "%d", &n);
            result += n;
        }
        printf("\nsum: %d\n", result);
    }
    else if (strcmp(argv[1], "-m") == 0) {
        result = 1;
        for (i = 2; i < argc; i++) {
            sscanf(argv[i], "%d", &n);
            result *= n;
        }
        printf("\nmul: %d\n", result);
    }
    else {
        printf("\nError: Invalid choice\n");
        exit(1);
    }

    return 0;
}