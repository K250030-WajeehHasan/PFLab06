#include <stdio.h>

int main() {
    int num, temp, rev = 0;
    printf("Enter book code: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    if (num == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

