#include <stdio.h>
#include <math.h>

// Function to display instructions to the user
void displayInstructions() {
    printf("This program calculates the speed of sound in air based on the temperature in degrees Fahrenheit.\n");
    printf("Please enter the temperature in degrees Fahrenheit to calculate the speed of sound.\n");
}

// Function to calculate the speed of sound
double calculateSpeedOfSound(double temperatureFahrenheit) {
    double a;
    a = 1086 * pow((5 * temperatureFahrenheit + 297) / 247, -2);
    return a;
}

int main() {
    double temperatureFahrenheit, speedOfSound;

    displayInstructions();
    printf("Enter the temperature in degrees Fahrenheit: ");
    scanf("%lf", &temperatureFahrenheit);

    // Calculate the speed of sound
    speedOfSound = calculateSpeedOfSound(temperatureFahrenheit);

    // Display the result
    printf("The speed of sound in air at %.2f degrees Fahrenheit is %.2f ft/sec.\n", temperatureFahrenheit, speedOfSound);

    return 0;
}
