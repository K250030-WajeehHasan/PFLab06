#include <stdio.h>

int main() {
    int num, digit, even = 0, odd = 0;
    printf("Enter meter reading number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }

    printf("Even Digits: %d\nOdd Digits: %d\n", even, odd);
    return 0;
}

