#include<stdio.h>
// funtion to print Hot or Cold depends on the temp user enters
void printhot();
void printcold();

int main() {
    int temperature;
    printf("enter temperature : ");
    scanf("%d" , &temperature);

    if(temperature > 30 && temperature <= 40) { // temp between 30 - 40 degree celsius
        printhot();
    }
    else if (temperature >= 0 && temperature <= 10 ) { // temp between 0 - 10 degree celsius
        printcold();
    }
    else {
        printf("unknown condition");
    }
    
    return 0;
}

void printhot() {
    printf("Hot");
}

void printcold() {
    printf("Cold");
}