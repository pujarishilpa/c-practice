#include<stdio.h>
void Alphabets(char *ch);

int main() {
    char ch;
    Alphabets(&ch);
    
    return 0;
}

void Alphabets(char *ch) {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf(" %c " , ch);
    }
}