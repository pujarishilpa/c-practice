#include<stdio.h>
// to print the largest number in an array
int LargestNumber(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
     LargestNumber(arr,5);
     return 0;
}

int LargestNumber(int arr[], int n) {
   for (int i=0; i<n; i++) {
            if (arr[i] >= 5) {
             printf("The largest Number is : %d" , arr[i]);
            }
      }
}