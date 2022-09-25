#include<stdio.h>
int main() {
int n;
printf("enter n");
scanf("%d" , &n);

int count = 0;
for(int i=1;i<=n;i++) {

    if(n % i == 0) {
        count++;
     }
}
    if( count == 2) {
        printf("It is a prime number");
    }
    else {
        printf(" Not a prime number");
    }
     return 0;
}
