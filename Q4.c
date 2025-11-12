#include <stdio.h>

int main() {
    int mark, count = 0, sum = 0;
    float avg;

    printf("Enter marks (-1 to stop):\n");
    while (1) {
        scanf("%d", &mark);
        if (mark == -1)
            break;
        sum += mark;
        count++;
    }

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    printf("Average Marks: %.2f\n", avg);
    return 0;
}

