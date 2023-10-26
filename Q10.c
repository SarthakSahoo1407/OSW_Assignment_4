#include<stdio.h>
#define BASEFARE 4.00
#define METERPERKM 1000
#define METERSPERINC 140
#define VARIABLEFARE 0.25
float calculateTaxiFare(float distance) {


    float totalFare;
    float distanceInMeters = distance * METERPERKM;
    float variableFareIncrement = distanceInMeters / METERSPERINC;
    totalFare = BASEFARE + (VARIABLEFARE * variableFareIncrement);
    return totalFare;
}

int main() {
    float distanceTraveled;
    float totalFare;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &distanceTraveled);
    totalFare = calculateTaxiFare(distanceTraveled);
    printf("The total fare for the taxi ride is $%.2f\n", totalFare);

    return 0;
}