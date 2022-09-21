#include<stdio.h>
//To check if a given character is digit or not
int main() {
char ch;
printf("enter ch");
scanf("%c" , &ch);

if(ch >= '0' && ch <= '9') {
    printf("character is a digit : %c" , ch);
}
else {
    printf("character is not a digit : %c" , ch);
}
return 0;
}