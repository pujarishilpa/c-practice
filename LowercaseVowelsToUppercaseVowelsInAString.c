#include<stdio.h>
#include<string.h>
// A program to convert lowercase vowels to uppercase vowels in a string.
int main() {
    char LowerCaseVowels[] = "a,e,i,o,u";
    char UpperCaseVowels[] = "A,E,I,O,U";

    strcpy(LowerCaseVowels, UpperCaseVowels );

    puts(LowerCaseVowels);
}