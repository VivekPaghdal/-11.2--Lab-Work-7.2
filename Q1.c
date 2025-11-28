#include <stdio.h>

int main() {
    int i, j, s = 5;

    for (i = 1; i <= s; i++) {

        
        for (j = 1; j <= s - i; j++) {
            printf("  ");
        }
        
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }    
}