#include <stdio.h>
#include <string.h>

// Function to get the integer value of a Roman numeral character
int romanCharToInt(char c) {
    switch (c) {
        case 'I': printf("1");
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // Invalid character
    }
}

// Function to convert a Roman numeral string to an integer
int romanToInt(char *s) {
    int total = 0;
    int prevValue = 0;

    for (int i = strlen(s) - 1; i >= 0; i--) {
        int value = romanCharToInt(s[i]);
        if (value < prevValue) {
            total -= value;
        } else {
            total += value;
        }
        prevValue = value;
    }

    return total;
}

int main() {
    char roman[20];

    printf("Enter a Roman numeral (uppercase): ");
    scanf("%s", roman);

    int result = romanToInt(roman);
    if (result == 0) {
        printf("Invalid Roman numeral.\n");
    } else {
        printf("Integer value: %d\n", result);
    }

    return 0;
}
