#include<stdio.h>
#include<math.h>
// square root of a number(n)
int squareroot(int n);
int main(){
    int n;
    printf("enter n");
    scanf("%d" , &n);
    squareroot(n);
    return 0;
}
int squareroot(int n) {
    int S;
    S = sqrt(n);
    printf("Square Root is : %d" , S);
}