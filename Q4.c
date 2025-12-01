#include<stdio.h>
int main(){
    int i, j, s=5;

    for(i = s; i >= 1; i--){

        for (s = 5; s > i; s--){
            printf (" ");
        }

        for (j = 1; j <=i; j++ ){
            printf("%d", j % 2);
        }

        printf("\n");
    }
  
}