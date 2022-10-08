#include<stdio.h>
void countx(int arr[], int n);
// In an array of numbers how many times X occurs
int main() {
    int arr[] = {1, 3, 3, 3, 3};
    countx(arr,5);
    return 0;
}
void countx(int arr[], int n) {
    int X = 3;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == X) {
            count++;
        }
    }
      printf("Number Of Times X Occurs : %d" , count);
}