#include <stdio.h>

/**
 * @description 사칙연산 > 별찍기-2
 */
int main(void) {

    int input; //입력값
    scanf("%d", &input);

    for ( int i=1; i<=input; i++ ) {
        for ( int j=input; j>=1; j-- ) {
            if ( j>i ) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
