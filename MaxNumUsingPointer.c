#include<stdio.h>
// Maximum Number Using Pointer
void Maxnum(int *a, int *b);

int main() {
    int a,b;
    printf("enter a");
    scanf("%d" , &a);

    printf("enter b");
    scanf("%d" , &b);

    Maxnum(&a , &b);
    return 0;
}

void Maxnum(int *a , int *b) {
    if (*a > *b) {
        printf("The maximum number is : %d" , *a);
    }
    else {
        printf("The maximum number is : %d" , *b);
    }
}