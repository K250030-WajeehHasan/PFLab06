#include <stdio.h>

int main() {
    int n, i, j, flag;

    printf("Enter ID number: ");
    scanf("%d", &n);

    flag = 1;
    if (n <= 1)
	    flag = 0;
    else {
        for (i = 2; i <= n / 2; i++)
            if (n % i == 0) {
                flag = 0;
                break;
            }
    }

    if (flag)
        printf("%d is a PRIME ID\n", n);
    else
        printf("%d is NOT a PRIME ID\n", n);

    printf("Prime numbers from 1 to %d:\n", n);
    for (i = 2; i <= n; i++) {
        int isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
