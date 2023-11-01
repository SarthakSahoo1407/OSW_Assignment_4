#include <stdio.h>

// Function to predict Gotham City's population
double population(int year) {
    double p = 52.966 + 2.184 * (year - 1990);
    return p;
}

int main() {
    int inputYear;

    printf("Enter a year after 1990: ");
    scanf("%d", &inputYear);

    if (inputYear < 1990) {
        printf("Please enter a year after 1990.\n");
    } else {
        double predictedPopulation = population(inputYear);

        printf("Predicted Gotham City population for %d (in thousands): %.3f\n", inputYear, predictedPopulation);
    }

    return 0;
}
