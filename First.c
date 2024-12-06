#include <stdio.h>

int main(void){
    int a, b;

    for (;;){
        printf("Введите число: ");
        scanf("%d", &a);

        if (a == 0){
            printf("0\n");
        }
        else if (a < 0){
            printf("-\n");
        } else {
            printf("+\n");
        }
    }

    return 0;
}