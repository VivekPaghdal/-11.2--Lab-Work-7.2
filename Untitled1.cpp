#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {     // rows
        for(j = i; j >= 1; j--) { // print reverse numbers
            printf("%d ", j);
        }
        printf("\n");            // next line
    }

    return 0;
}

