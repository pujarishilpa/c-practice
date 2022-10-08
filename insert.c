#include<stdio.h>
int InsertElement(int arr[], int n);
int NewArray(int arr[], int n);

int main() {
    int x;
    int arr[] = {1, 2, 3, 4, x};

    InsertElement(arr,5);
    NewArray(arr,5);
    return 0;
}

int InsertElement(int arr[], int n) {
     int x;
     printf("enter x");
     scanf("%d" , &x);
     printf("%d" , x);
     arr[4] = x;
     printf("\n");
}

int NewArray(int arr[], int n) {
    for (int i=0; i < n; i++) {
        printf("%d\t" , arr[i]);
    }
}