#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
 
int convertToBase10(const char* number, int base) {
    int result = 0;
    int length = strlen(number);

    for (int i = 0; i < length; i++) {
        int digit = 0;
        if (number[i] >= '0' && number[i] <= '9') {
            digit = number[i] - '0';
        } else if (number[i] >= 'A' && number[i] <= 'F') {
            digit = 10 + (number[i] - 'A');
        } else if (number[i] >= 'a' && number[i] <= 'f') {
            digit = 10 + (number[i] - 'a');
        } else {
            printf("Invalid digit in the input number. Exiting.\n");
            exit(1);
        }

        if (digit >= base) {
            printf("Invalid digit for the selected base. Exiting.\n");
            exit(1);
        }

        result = result * base + digit;
    }

    return result;
}

void convertFromBase10(int num, int base) {
    char result[100];  
    int index = 0;

    while (num > 0) {
        int remainder = num % base;
        if (remainder < 10) {
            result[index] = remainder + '0';
        } else {
            result[index] = (remainder - 10) + 'A';
        }
        num /= base;
        index++;
    }

    printf("Result in base %d: ", base);
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
}

int main() {
    int i, o;
    char n[100];

    printf("Enter the input base (2-16): ");
    scanf("%d", &i);

    if (i < 2 || i > 16) {
        printf("Input base is outside the supported range. Exiting.\n");
        return 1;
    }

    printf("Enter the output base (2-16): ");
    scanf("%d", &o);

    if (o < 2 || o > 16) {
        printf("Output base is outside the supported range. Exiting.\n");
        return 1;
    }

    printf("Enter the number in base %d: ", i);
    scanf("%s", n);

    int decimalValue = convertToBase10(n, i);
    convertFromBase10(decimalValue, o);

    return 0;
}
