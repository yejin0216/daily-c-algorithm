#include <stdio.h>

/**
 * @description for문 사용해보기 > 별 찍기-1
 */
int main(void) {

    int input; //입력값
    scanf("%d", &input);

    for ( int i=1; i<=input; i++ ) {
        for ( int j=1; j<=i; j++ ) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}