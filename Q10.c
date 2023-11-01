#include<stdio.h>
#define BASEFARE 4.00
#define METERPERKM 1000
#define METERSPERINC 140
#define VARIABLEFARE 0.25
float calculateTaxiFare(float distance) {


    float fare;
    float d = distance * METERPERKM;
    float inc = d / METERSPERINC;
    fare = BASEFARE + (VARIABLEFARE * inc);
    return fare;
}

int main() {
    float d;
    float fare;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &d);
    fare = calculateTaxiFare(d);
    printf("The total fare for the taxi ride is $%.2f\n", fare);

    return 0;
}