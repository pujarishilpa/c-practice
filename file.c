#include<stdio.h>
// file program
int main() {
    FILE*fptr;
    fptr = fopen("natural.txt","w");
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        fprintf(fptr,"%d\n",i);
    }
    fclose(fptr);
    return 0;
}
