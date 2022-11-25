#include<stdio.h>
// Rectangular Pattern Program
int main() {
    int row,column;
    printf("enter row : ");
    scanf("%d", &row);
    printf("enter column : ");
    scanf("%d", &column);

    for(int i=1; i<=row; i++) {
        for(int j=1; j<=column; j++) {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}