/* This program is to print the counts taken for the element 1 to reach to the middle of a 5*5 matrix*/

#include<stdio.h>
int main() {
    int A[5][5];
    int i, j;
    int c = 1;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            scanf("%d ",&A[i][j]);
        }
    }
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(A[i][j] == 1) {
                c = abs(i - 3) + abs(j -3);
            }
        }
    }
    printf("%d",c);
    return 0;
}
