#include <stdio.h>
#include <stdbool.h>

// Function prototype:
int nextPrime(int n);  // Formal parameter: int n

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);  
    
    int result = nextPrime(n);  
    
    printf("The first prime number larger than %d is: %d\n", n, result);
    
    return 0;
}
int nextPrime(int n) {  
    n++;  
    while (true) {
        if (isPrime(n)) {
            return n;
        }
        n++;
    }
}
