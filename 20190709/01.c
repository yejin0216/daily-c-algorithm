#include <stdio.h>

int main(void) {

    int input;
    scanf("%d", &input); //입력한 숫자

    for ( int i=0; i<input; i++ ) {
        for ( int j=0; j<input; j++ ) {
            if ( (i != 0 && j!= 0) && ((i%3 == 1 && j%3 == 1) || ((i/3)%3 == 1 && (j/3)%3 == 1) || ((i/9)%3 == 1 && (j/9)%3 == 1) || ((i/27)%3 == 1 && (j/27)%3 == 1)
            || ((i/81)%3 == 1 && (j/81)%3 == 1) || ((i/243)%3 == 1 && (j/243)%3 == 1) || ((i/729)%3 == 1 && (j/729)%3 == 1) || ((i/2187)%3 == 1 && (j/2187)%3 == 1)) ) {
                printf(" ");
            } else {
                printf("*");
            }
            if ( (j+1)%input == 0 ) {
                printf("\n");
            }
        }
    }

    return 0;
}
