#include <stdio.h>

// Function to check if the position is valid
int IsValidPosition(int position) {
    int row = position / 10;
    int column = position % 10;

    // Check if both row and column are within the range 1-8
    if (row >= 1 && row <= 8 && column >= 1 && column <= 8) {
        return 1;  // Valid position
    } else {
        return 0;  // Invalid position
    }
}

int main() {
    int position;
    
    printf("Enter a two-digit position (11-88) on the chessboard: ");
    scanf("%d", &position);

    if (IsValidPosition(position)) {
        int row = position / 10;
        int column = position % 10;

        if ((row % 2 == 1 && column % 2 == 1) || (row % 2 == 0 && column % 2 == 0)) {
            printf("The square is black.\n");
        } else {
            printf("The square is white.\n");
        }
    } else {
        printf("Invalid position. Please enter a two-digit number between 11 and 88.\n");
    }

    return 0;
}