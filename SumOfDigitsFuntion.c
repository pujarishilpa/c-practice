#include<stdio.h>
// A funtion to find sum of digits of a number
int sumofdigs(int n);
int main() {
    int n;
    sumofdigs(n);
    return 0;
}
int sumofdigs(int n) {
         printf("Enter n");
         scanf("%d" , &n);
   int sum = 0, remainder;
   while ( n > 0) {
         remainder = n % 10;
         sum = sum + remainder;
         n = n / 10;
   }
   printf("sum of dig is : %d" , sum);
}